/*
 * Copyright (C) 2006-2010 Tobias Brunner
 * Copyright (C) 2005-2008 Martin Willi
 * Copyright (C) 2006 Daniel Roethlisberger
 * Copyright (C) 2005 Jan Hutter
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#define _GNU_SOURCE
#include "child_sa.h"

#include <stdio.h>
#include <string.h>
#include <time.h>

#include <hydra.h>
#include <daemon.h>

ENUM(child_sa_state_names, CHILD_CREATED, CHILD_DESTROYING,
	"CREATED",
	"ROUTED",
	"INSTALLING",
	"INSTALLED",
	"UPDATING",
	"REKEYING",
	"DELETING",
	"DESTROYING",
);

typedef struct private_child_sa_t private_child_sa_t;

/**
 * Private data of a child_sa_t object.
 */
struct private_child_sa_t {
	/**
	 * Public interface of child_sa_t.
	 */
	child_sa_t public;

	/**
	 * address of us
	 */
	host_t *my_addr;

	/**
	 * address of remote
	 */
	host_t *other_addr;

	/**
	 * our actually used SPI, 0 if unused
	 */
	u_int32_t my_spi;

	/**
	 * others used SPI, 0 if unused
	 */
	u_int32_t other_spi;

	/**
	 * our Compression Parameter Index (CPI) used, 0 if unused
	 */
	u_int16_t my_cpi;

	/**
	 * others Compression Parameter Index (CPI) used, 0 if unused
	 */
	u_int16_t other_cpi;

	/**
	 * List for local traffic selectors
	 */
	linked_list_t *my_ts;

	/**
	 * List for remote traffic selectors
	 */
	linked_list_t *other_ts;

	/**
	 * Protocol used to protect this SA, ESP|AH
	 */
	protocol_id_t protocol;

	/**
	 * reqid used for this child_sa
	 */
	u_int32_t reqid;

	/**
	 * inbound mark used for this child_sa
	 */
	mark_t mark_in;

	/**
	 * outbound mark used for this child_sa
	 */
	mark_t mark_out;

	/**
	 * absolute time when rekeying is scheduled
	 */
	time_t rekey_time;

	/**
	 * absolute time when the SA expires
	 */
	time_t expire_time;

	/**
	 * state of the CHILD_SA
	 */
	child_sa_state_t state;

	/**
	 * Specifies if UDP encapsulation is enabled (NAT traversal)
	 */
	bool encap;

	/**
	 * Specifies the IPComp transform used (IPCOMP_NONE if disabled)
	 */
	ipcomp_transform_t ipcomp;

	/**
	 * mode this SA uses, tunnel/transport
	 */
	ipsec_mode_t mode;

	/**
	 * Action to enforce if peer closes the CHILD_SA
	 */
	action_t close_action;

	/**
	 * Action to enforce if peer is considered dead
	 */
	action_t dpd_action;

	/**
	 * selected proposal
	 */
	proposal_t *proposal;

	/**
	 * config used to create this child
	 */
	child_cfg_t *config;

	/**
	 * time of last use in seconds (inbound)
	 */
	u_int32_t my_usetime;

	/**
	 * time of last use in seconds (outbound)
	 */
	u_int32_t other_usetime;

	/**
	 * last number of inbound bytes
	 */
	u_int64_t my_usebytes;

	/**
	 * last number of outbound bytes
	 */
	u_int64_t other_usebytes;
};

/**
 * convert an IKEv2 specific protocol identifier to the IP protocol identifier.
 */
static inline u_int8_t proto_ike2ip(protocol_id_t protocol)
{
	switch (protocol)
	{
		case PROTO_ESP:
			return IPPROTO_ESP;
		case PROTO_AH:
			return IPPROTO_AH;
		default:
			return protocol;
	}
}

METHOD(child_sa_t, get_name, char*,
	   private_child_sa_t *this)
{
	return this->config->get_name(this->config);
}

METHOD(child_sa_t, get_reqid, u_int32_t,
	   private_child_sa_t *this)
{
	return this->reqid;
}

METHOD(child_sa_t, get_config, child_cfg_t*,
	   private_child_sa_t *this)
{
	return this->config;
}

METHOD(child_sa_t, set_state, void,
	   private_child_sa_t *this, child_sa_state_t state)
{
	charon->bus->child_state_change(charon->bus, &this->public, state);
	this->state = state;
}

METHOD(child_sa_t, get_state, child_sa_state_t,
	   private_child_sa_t *this)
{
	return this->state;
}

METHOD(child_sa_t, get_spi, u_int32_t,
	   private_child_sa_t *this, bool inbound)
{
	return inbound ? this->my_spi : this->other_spi;
}

METHOD(child_sa_t, get_cpi, u_int16_t,
	   private_child_sa_t *this, bool inbound)
{
	return inbound ? this->my_cpi : this->other_cpi;
}

METHOD(child_sa_t, get_protocol, protocol_id_t,
	   private_child_sa_t *this)
{
	return this->protocol;
}

METHOD(child_sa_t, set_protocol, void,
	   private_child_sa_t *this, protocol_id_t protocol)
{
	this->protocol = protocol;
}

METHOD(child_sa_t, get_mode, ipsec_mode_t,
	   private_child_sa_t *this)
{
	return this->mode;
}

METHOD(child_sa_t, set_mode, void,
	   private_child_sa_t *this, ipsec_mode_t mode)
{
	this->mode = mode;
}

METHOD(child_sa_t, has_encap, bool,
	   private_child_sa_t *this)
{
	return this->encap;
}

METHOD(child_sa_t, get_ipcomp, ipcomp_transform_t,
	   private_child_sa_t *this)
{
	return this->ipcomp;
}

METHOD(child_sa_t, set_ipcomp, void,
	   private_child_sa_t *this, ipcomp_transform_t ipcomp)
{
	this->ipcomp = ipcomp;
}

METHOD(child_sa_t, set_close_action, void,
	   private_child_sa_t *this, action_t action)
{
	this->close_action = action;
}

METHOD(child_sa_t, get_close_action, action_t,
	   private_child_sa_t *this)
{
	return this->close_action;
}

METHOD(child_sa_t, set_dpd_action, void,
	   private_child_sa_t *this, action_t action)
{
	this->dpd_action = action;
}

METHOD(child_sa_t, get_dpd_action, action_t,
	   private_child_sa_t *this)
{
	return this->dpd_action;
}

METHOD(child_sa_t, get_proposal, proposal_t*,
	   private_child_sa_t *this)
{
	return this->proposal;
}

METHOD(child_sa_t, set_proposal, void,
	   private_child_sa_t *this, proposal_t *proposal)
{
	this->proposal = proposal->clone(proposal);
}

METHOD(child_sa_t, get_traffic_selectors, linked_list_t*,
	   private_child_sa_t *this, bool local)
{
	return local ? this->my_ts : this->other_ts;
}

typedef struct policy_enumerator_t policy_enumerator_t;

/**
 * Private policy enumerator
 */
struct policy_enumerator_t {
	/** implements enumerator_t */
	enumerator_t public;
	/** enumerator over own TS */
	enumerator_t *mine;
	/** enumerator over others TS */
	enumerator_t *other;
	/** list of others TS, to recreate enumerator */
	linked_list_t *list;
	/** currently enumerating TS for "me" side */
	traffic_selector_t *ts;
};

METHOD(enumerator_t, policy_enumerate, bool,
	   policy_enumerator_t *this, traffic_selector_t **my_out,
	   traffic_selector_t **other_out)
{
	traffic_selector_t *other_ts;

	while (this->ts || this->mine->enumerate(this->mine, &this->ts))
	{
		if (!this->other->enumerate(this->other, &other_ts))
		{	/* end of others list, restart with new of mine */
			this->other->destroy(this->other);
			this->other = this->list->create_enumerator(this->list);
			this->ts = NULL;
			continue;
		}
		if (this->ts->get_type(this->ts) != other_ts->get_type(other_ts))
		{	/* family mismatch */
			continue;
		}
		if (this->ts->get_protocol(this->ts) &&
			other_ts->get_protocol(other_ts) &&
			this->ts->get_protocol(this->ts) != other_ts->get_protocol(other_ts))
		{	/* protocol mismatch */
			continue;
		}
		*my_out = this->ts;
		*other_out = other_ts;
		return TRUE;
	}
	return FALSE;
}

METHOD(enumerator_t, policy_destroy, void,
	   policy_enumerator_t *this)
{
	this->mine->destroy(this->mine);
	this->other->destroy(this->other);
	free(this);
}

METHOD(child_sa_t, create_policy_enumerator, enumerator_t*,
	   private_child_sa_t *this)
{
	policy_enumerator_t *e;

	INIT(e,
		.public = {
			.enumerate = (void*)_policy_enumerate,
			.destroy = _policy_destroy,
		},
		.mine = this->my_ts->create_enumerator(this->my_ts),
		.other = this->other_ts->create_enumerator(this->other_ts),
		.list = this->other_ts,
		.ts = NULL,
	);

	return &e->public;
}

/**
 * update the cached usebytes
 * returns SUCCESS if the usebytes have changed, FAILED if not or no SPIs
 * are available, and NOT_SUPPORTED if the kernel interface does not support
 * querying the usebytes.
 */
static status_t update_usebytes(private_child_sa_t *this, bool inbound)
{
	status_t status = FAILED;
	u_int64_t bytes;

	if (inbound)
	{
		if (this->my_spi)
		{
			status = hydra->kernel_interface->query_sa(hydra->kernel_interface,
							this->other_addr, this->my_addr, this->my_spi,
							proto_ike2ip(this->protocol), this->mark_in,
							&bytes);
			if (status == SUCCESS)
			{
				if (bytes > this->my_usebytes)
				{
					this->my_usebytes = bytes;
					return SUCCESS;
				}
				return FAILED;
			}
		}
	}
	else
	{
		if (this->other_spi)
		{
			status = hydra->kernel_interface->query_sa(hydra->kernel_interface,
							this->my_addr, this->other_addr, this->other_spi,
							proto_ike2ip(this->protocol), this->mark_out,
							&bytes);
			if (status == SUCCESS)
			{
				if (bytes > this->other_usebytes)
				{
					this->other_usebytes = bytes;
					return SUCCESS;
				}
				return FAILED;
			}
		}
	}
	return status;
}

/**
 * updates the cached usetime
 */
static void update_usetime(private_child_sa_t *this, bool inbound)
{
	enumerator_t *enumerator;
	traffic_selector_t *my_ts, *other_ts;
	u_int32_t last_use = 0;

	enumerator = create_policy_enumerator(this);
	while (enumerator->enumerate(enumerator, &my_ts, &other_ts))
	{
		u_int32_t in, out, fwd;

		if (inbound)
		{
			if (hydra->kernel_interface->query_policy(hydra->kernel_interface,
						other_ts, my_ts, POLICY_IN, this->mark_in, &in) == SUCCESS)
			{
				last_use = max(last_use, in);
			}
			if (this->mode != MODE_TRANSPORT)
			{
				if (hydra->kernel_interface->query_policy(hydra->kernel_interface,
						other_ts, my_ts, POLICY_FWD, this->mark_in, &fwd) == SUCCESS)
				{
					last_use = max(last_use, fwd);
				}
			}
		}
		else
		{
			if (hydra->kernel_interface->query_policy(hydra->kernel_interface,
						my_ts, other_ts, POLICY_OUT, this->mark_out, &out) == SUCCESS)
			{
				last_use = max(last_use, out);
			}
		}
	}
	enumerator->destroy(enumerator);

	if (last_use == 0)
	{
		return;
	}
	if (inbound)
	{
		this->my_usetime = last_use;
	}
	else
	{
		this->other_usetime = last_use;
	}
}

METHOD(child_sa_t, get_usestats, void,
	   private_child_sa_t *this, bool inbound, time_t *time, u_int64_t *bytes)
{
	if (update_usebytes(this, inbound) != FAILED)
	{
		/* there was traffic since last update or the kernel interface
		 * does not support querying the number of usebytes.
		 */
		update_usetime(this, inbound);
	}
	if (time)
	{
		*time = inbound ? this->my_usetime : this->other_usetime;
	}
	if (bytes)
	{
		*bytes = inbound ? this->my_usebytes : this->other_usebytes;
	}
}

METHOD(child_sa_t, get_lifetime, time_t,
	   private_child_sa_t *this, bool hard)
{
	return hard ? this->expire_time : this->rekey_time;
}

METHOD(child_sa_t, alloc_spi, u_int32_t,
	   private_child_sa_t *this, protocol_id_t protocol)
{
	if (hydra->kernel_interface->get_spi(hydra->kernel_interface,
										 this->other_addr, this->my_addr,
										 proto_ike2ip(protocol), this->reqid,
										 &this->my_spi) == SUCCESS)
	{
		return this->my_spi;
	}
	return 0;
}

METHOD(child_sa_t, alloc_cpi, u_int16_t,
	   private_child_sa_t *this)
{
	if (hydra->kernel_interface->get_cpi(hydra->kernel_interface,
										 this->other_addr, this->my_addr,
										 this->reqid, &this->my_cpi) == SUCCESS)
	{
		return this->my_cpi;
	}
	return 0;
}

METHOD(child_sa_t, install, status_t,
	   private_child_sa_t *this, chunk_t encr, chunk_t integ, u_int32_t spi,
	   u_int16_t cpi, bool inbound, bool tfcv3, linked_list_t *my_ts,
	   linked_list_t *other_ts)
{
	u_int16_t enc_alg = ENCR_UNDEFINED, int_alg = AUTH_UNDEFINED, size;
	u_int16_t esn = NO_EXT_SEQ_NUMBERS;
	traffic_selector_t *src_ts = NULL, *dst_ts = NULL, *vti_src_ts = NULL, *vti_dst_ts = NULL;
	time_t now;
	lifetime_cfg_t *lifetime;
	u_int32_t tfc = 0;
	host_t *src, *dst;
	status_t status;
	bool update = FALSE;
	mark_t mark_in;

	/* now we have to decide which spi to use. Use self allocated, if "in",
	 * or the one in the proposal, if not "in" (others). Additionally,
	 * source and dest host switch depending on the role */
	if (inbound)
	{
		dst = this->my_addr;
		src = this->other_addr;
		if (this->my_spi == spi)
		{	/* alloc_spi has been called, do an SA update */
			update = TRUE;
		}
		this->my_spi = spi;
		this->my_cpi = cpi;
	}
	else
	{
		src = this->my_addr;
		dst = this->other_addr;
		this->other_spi = spi;
		this->other_cpi = cpi;

		if (tfcv3)
		{
			tfc = this->config->get_tfc(this->config);
		}
	}

	DBG2(DBG_CHD, "adding %s %N SA", inbound ? "inbound" : "outbound",
		 protocol_id_names, this->protocol);

	/* send SA down to the kernel */
	DBG2(DBG_CHD, "  SPI 0x%.8x, src %H dst %H", ntohl(spi), src, dst);

	this->proposal->get_algorithm(this->proposal, ENCRYPTION_ALGORITHM,
								  &enc_alg, &size);
	this->proposal->get_algorithm(this->proposal, INTEGRITY_ALGORITHM,
								  &int_alg, &size);
	this->proposal->get_algorithm(this->proposal, EXTENDED_SEQUENCE_NUMBERS,
								  &esn, NULL);

	lifetime = this->config->get_lifetime(this->config);

	now = time_monotonic(NULL);
	if (lifetime->time.rekey)
	{
		this->rekey_time = now + lifetime->time.rekey;
	}
	if (lifetime->time.life)
	{
		this->expire_time = now + lifetime->time.life;
	}

	if (!lifetime->time.jitter && !inbound)
	{	/* avoid triggering multiple rekey events */
		lifetime->time.rekey = 0;
	}

	if (this->mode == MODE_BEET || this->mode == MODE_TRANSPORT)
	{
		/* BEET requires the bound address from the traffic selectors.
		 * TODO: We add just the first traffic selector for now, as the
		 * kernel accepts a single TS per SA only */
		if (inbound)
		{
			my_ts->get_first(my_ts, (void**)&dst_ts);
			other_ts->get_first(other_ts, (void**)&src_ts);
		}
		else
		{
			my_ts->get_first(my_ts, (void**)&src_ts);
			other_ts->get_first(other_ts, (void**)&dst_ts);
		}
	}

	/* If this is a VTI (identified in this case by both src and dst traffic 
	 * selectors being equal) then set a wilcard mark on the incoming sa only,
	 * otherwise mark as normal */
	if (inbound)
	{
		my_ts->get_first(my_ts, (void**)&vti_dst_ts);
		other_ts->get_first(other_ts, (void**)&vti_src_ts);
		
		if (vti_src_ts && vti_src_ts->equals(vti_src_ts, vti_dst_ts))
		{
			mark_in.value = 0;
			mark_in.mask = 0xffffffff;
		}
		else
		{
			mark_in = this->mark_in;
		}
	}
	
	status = hydra->kernel_interface->add_sa(hydra->kernel_interface,
				src, dst, spi, proto_ike2ip(this->protocol), this->reqid,
				inbound ? mark_in : this->mark_out, tfc,
				lifetime, enc_alg, encr, int_alg, integ, this->mode,
				this->ipcomp, cpi, this->encap, esn, update, src_ts, dst_ts);

	free(lifetime);

	return status;
}

METHOD(child_sa_t, add_policies, status_t,
	   private_child_sa_t *this, linked_list_t *my_ts_list,
	   linked_list_t *other_ts_list)
{
	enumerator_t *enumerator;
	traffic_selector_t *my_ts, *other_ts;
	status_t status = SUCCESS;
	bool routed = (this->state == CHILD_CREATED);

	/* apply traffic selectors */
	enumerator = my_ts_list->create_enumerator(my_ts_list);
	while (enumerator->enumerate(enumerator, &my_ts))
	{
		this->my_ts->insert_last(this->my_ts, my_ts->clone(my_ts));
	}
	enumerator->destroy(enumerator);
	enumerator = other_ts_list->create_enumerator(other_ts_list);
	while (enumerator->enumerate(enumerator, &other_ts))
	{
		this->other_ts->insert_last(this->other_ts, other_ts->clone(other_ts));
	}
	enumerator->destroy(enumerator);

	if (this->config->install_policy(this->config))
	{
		ipsec_sa_cfg_t my_sa = {
			.mode = this->mode,
			.reqid = this->reqid,
			.ipcomp = {
				.transform = this->ipcomp,
			},
		}, other_sa = my_sa;

		my_sa.ipcomp.cpi = this->my_cpi;
		other_sa.ipcomp.cpi = this->other_cpi;

		if (this->protocol == PROTO_ESP)
		{
			my_sa.esp.use = TRUE;
			my_sa.esp.spi = this->my_spi;
			other_sa.esp.use = TRUE;
			other_sa.esp.spi = this->other_spi;
		}
		else
		{
			my_sa.ah.use = TRUE;
			my_sa.ah.spi = this->my_spi;
			other_sa.ah.use = TRUE;
			other_sa.ah.spi = this->other_spi;
		}

		/* enumerate pairs of traffic selectors */
		enumerator = create_policy_enumerator(this);
		while (enumerator->enumerate(enumerator, &my_ts, &other_ts))
		{
			/* install 3 policies: out, in and forward */
			status |= hydra->kernel_interface->add_policy(
							hydra->kernel_interface,
							this->my_addr, this->other_addr, my_ts, other_ts,
							POLICY_OUT, POLICY_IPSEC, &other_sa,
							this->mark_out, routed);

			status |= hydra->kernel_interface->add_policy(
							hydra->kernel_interface,
							this->other_addr, this->my_addr, other_ts, my_ts,
							POLICY_IN, POLICY_IPSEC, &my_sa,
							this->mark_in, routed);
			if (this->mode != MODE_TRANSPORT)
			{
				status |= hydra->kernel_interface->add_policy(
							hydra->kernel_interface,
							this->other_addr, this->my_addr, other_ts, my_ts,
							POLICY_FWD, POLICY_IPSEC, &my_sa,
							this->mark_in, routed);
			}

			if (status != SUCCESS)
			{
				break;
			}
		}
		enumerator->destroy(enumerator);
	}

	if (status == SUCCESS && this->state == CHILD_CREATED)
	{	/* switch to routed state if no SAD entry set up */
		set_state(this, CHILD_ROUTED);
	}
	return status;
}

METHOD(child_sa_t, update, status_t,
	   private_child_sa_t *this,  host_t *me, host_t *other, host_t *vip,
	   bool encap)
{
	child_sa_state_t old;
	bool transport_proxy_mode;

	/* anything changed at all? */
	if (me->equals(me, this->my_addr) &&
		other->equals(other, this->other_addr) && this->encap == encap)
	{
		return SUCCESS;
	}

	old = this->state;
	set_state(this, CHILD_UPDATING);
	transport_proxy_mode = this->config->use_proxy_mode(this->config) &&
						   this->mode == MODE_TRANSPORT;

	if (!transport_proxy_mode)
	{
		/* update our (initator) SA */
		if (this->my_spi)
		{
			if (hydra->kernel_interface->update_sa(hydra->kernel_interface,
							this->my_spi, proto_ike2ip(this->protocol),
							this->ipcomp != IPCOMP_NONE ? this->my_cpi : 0,
							this->other_addr, this->my_addr, other, me,
							this->encap, encap, this->mark_in) == NOT_SUPPORTED)
			{
				return NOT_SUPPORTED;
			}
		}

		/* update his (responder) SA */
		if (this->other_spi)
		{
			if (hydra->kernel_interface->update_sa(hydra->kernel_interface,
							this->other_spi, proto_ike2ip(this->protocol),
							this->ipcomp != IPCOMP_NONE ? this->other_cpi : 0,
							this->my_addr, this->other_addr, me, other,
							this->encap, encap, this->mark_out) == NOT_SUPPORTED)
			{
				return NOT_SUPPORTED;
			}
		}
	}

	if (this->config->install_policy(this->config))
	{
		ipsec_sa_cfg_t my_sa = {
			.mode = this->mode,
			.reqid = this->reqid,
			.ipcomp = {
				.transform = this->ipcomp,
			},
		}, other_sa = my_sa;

		my_sa.ipcomp.cpi = this->my_cpi;
		other_sa.ipcomp.cpi = this->other_cpi;

		if (this->protocol == PROTO_ESP)
		{
			my_sa.esp.use = TRUE;
			my_sa.esp.spi = this->my_spi;
			other_sa.esp.use = TRUE;
			other_sa.esp.spi = this->other_spi;
		}
		else
		{
			my_sa.ah.use = TRUE;
			my_sa.ah.spi = this->my_spi;
			other_sa.ah.use = TRUE;
			other_sa.ah.spi = this->other_spi;
		}

		/* update policies */
		if (!me->ip_equals(me, this->my_addr) ||
			!other->ip_equals(other, this->other_addr))
		{
			enumerator_t *enumerator;
			traffic_selector_t *my_ts, *other_ts;

			/* always use high priorities, as hosts getting updated are INSTALLED */
			enumerator = create_policy_enumerator(this);
			while (enumerator->enumerate(enumerator, &my_ts, &other_ts))
			{
				/* remove old policies first */
				hydra->kernel_interface->del_policy(hydra->kernel_interface,
							my_ts, other_ts, POLICY_OUT, this->mark_out, FALSE);
				hydra->kernel_interface->del_policy(hydra->kernel_interface,
							other_ts, my_ts,  POLICY_IN, this->mark_in, FALSE);
				if (this->mode != MODE_TRANSPORT)
				{
					hydra->kernel_interface->del_policy(hydra->kernel_interface,
							other_ts, my_ts, POLICY_FWD, this->mark_in, FALSE);
				}

				/* check whether we have to update a "dynamic" traffic selector */
				if (!me->ip_equals(me, this->my_addr) &&
					my_ts->is_host(my_ts, this->my_addr))
				{
					my_ts->set_address(my_ts, me);
				}
				if (!other->ip_equals(other, this->other_addr) &&
					other_ts->is_host(other_ts, this->other_addr))
				{
					other_ts->set_address(other_ts, other);
				}

				/* we reinstall the virtual IP to handle interface roaming
				 * correctly */
				if (vip)
				{
					hydra->kernel_interface->del_ip(hydra->kernel_interface, vip);
					hydra->kernel_interface->add_ip(hydra->kernel_interface, vip, me);
				}

				/* reinstall updated policies */
				hydra->kernel_interface->add_policy(hydra->kernel_interface,
						me, other, my_ts, other_ts, POLICY_OUT, POLICY_IPSEC,
						&other_sa, this->mark_out, FALSE);
				hydra->kernel_interface->add_policy(hydra->kernel_interface,
						other, me, other_ts, my_ts, POLICY_IN, POLICY_IPSEC,
						&my_sa, this->mark_in, FALSE);
				if (this->mode != MODE_TRANSPORT)
				{
					hydra->kernel_interface->add_policy(hydra->kernel_interface,
						other, me, other_ts, my_ts, POLICY_FWD, POLICY_IPSEC,
						&my_sa, this->mark_in, FALSE);
				}
			}
			enumerator->destroy(enumerator);
		}
	}

	if (!transport_proxy_mode)
	{
		/* apply hosts */
		if (!me->equals(me, this->my_addr))
		{
			this->my_addr->destroy(this->my_addr);
			this->my_addr = me->clone(me);
		}
		if (!other->equals(other, this->other_addr))
		{
			this->other_addr->destroy(this->other_addr);
			this->other_addr = other->clone(other);
		}
	}

	this->encap = encap;
	set_state(this, old);

	return SUCCESS;
}

METHOD(child_sa_t, destroy, void,
	   private_child_sa_t *this)
{
	enumerator_t *enumerator;
	traffic_selector_t *my_ts, *other_ts, *vti_src_ts = NULL, *vti_dst_ts = NULL;
	bool unrouted = (this->state == CHILD_ROUTED);
	mark_t mark_in;

	set_state(this, CHILD_DESTROYING);

	/* delete SAs in the kernel, if they are set up */
	if (this->my_spi)
	{
		/* if CHILD was not established, use PROTO_ESP used during alloc_spi().
		 * TODO: For AH support, we have to store protocol specific SPI.s */
		if (this->protocol == PROTO_NONE)
		{
			this->protocol = PROTO_ESP;
		}
		
		/* If this is a VTI (identified in this case by both src and dst traffic 
		 * selectors being equal) then use a wilcard mark when removing the incoming 
		 * sa, otherwise use the mark as normal */
		this->my_ts->get_first(this->my_ts, (void**)&vti_dst_ts);
		this->other_ts->get_first(this->other_ts, (void**)&vti_src_ts);
	
		if (vti_src_ts && vti_src_ts->equals(vti_src_ts, vti_dst_ts))
		{
			mark_in.value = 0;
			mark_in.mask = 0xffffffff;
		}
		else
		{
			mark_in = this->mark_in;
		}
		
		hydra->kernel_interface->del_sa(hydra->kernel_interface,
					this->other_addr, this->my_addr, this->my_spi,
					proto_ike2ip(this->protocol), this->my_cpi,
					mark_in);
	}
	if (this->other_spi)
	{
		hydra->kernel_interface->del_sa(hydra->kernel_interface,
					this->my_addr, this->other_addr, this->other_spi,
					proto_ike2ip(this->protocol), this->other_cpi,
					this->mark_out);
	}

	if (this->config->install_policy(this->config))
	{
		/* delete all policies in the kernel */
		enumerator = create_policy_enumerator(this);
		while (enumerator->enumerate(enumerator, &my_ts, &other_ts))
		{
			hydra->kernel_interface->del_policy(hydra->kernel_interface,
						my_ts, other_ts, POLICY_OUT, this->mark_out, unrouted);
			hydra->kernel_interface->del_policy(hydra->kernel_interface,
						other_ts, my_ts, POLICY_IN, this->mark_in, unrouted);
			if (this->mode != MODE_TRANSPORT)
			{
				hydra->kernel_interface->del_policy(hydra->kernel_interface,
						other_ts, my_ts, POLICY_FWD, this->mark_in, unrouted);
			}
		}
		enumerator->destroy(enumerator);
	}

	this->my_ts->destroy_offset(this->my_ts, offsetof(traffic_selector_t, destroy));
	this->other_ts->destroy_offset(this->other_ts, offsetof(traffic_selector_t, destroy));
	this->my_addr->destroy(this->my_addr);
	this->other_addr->destroy(this->other_addr);
	DESTROY_IF(this->proposal);
	this->config->destroy(this->config);
	free(this);
}

/**
 * Described in header.
 */
child_sa_t * child_sa_create(host_t *me, host_t* other,
							 child_cfg_t *config, u_int32_t rekey, bool encap)
{
	static u_int32_t reqid = 0;
	private_child_sa_t *this;

	INIT(this,
		.public = {
			.get_name = _get_name,
			.get_reqid = _get_reqid,
			.get_config = _get_config,
			.get_state = _get_state,
			.set_state = _set_state,
			.get_spi = _get_spi,
			.get_cpi = _get_cpi,
			.get_protocol = _get_protocol,
			.set_protocol = _set_protocol,
			.get_mode = _get_mode,
			.set_mode = _set_mode,
			.get_proposal = _get_proposal,
			.set_proposal = _set_proposal,
			.get_lifetime = _get_lifetime,
			.get_usestats = _get_usestats,
			.has_encap = _has_encap,
			.get_ipcomp = _get_ipcomp,
			.set_ipcomp = _set_ipcomp,
			.get_close_action = _get_close_action,
			.set_close_action = _set_close_action,
			.get_dpd_action = _get_dpd_action,
			.set_dpd_action = _set_dpd_action,
			.alloc_spi = _alloc_spi,
			.alloc_cpi = _alloc_cpi,
			.install = _install,
			.update = _update,
			.add_policies = _add_policies,
			.get_traffic_selectors = _get_traffic_selectors,
			.create_policy_enumerator = _create_policy_enumerator,
			.destroy = _destroy,
		},
		.my_addr = me->clone(me),
		.other_addr = other->clone(other),
		.encap = encap,
		.ipcomp = IPCOMP_NONE,
		.state = CHILD_CREATED,
		.my_ts = linked_list_create(),
		.other_ts = linked_list_create(),
		.protocol = PROTO_NONE,
		.mode = MODE_TUNNEL,
		.close_action = config->get_close_action(config),
		.dpd_action = config->get_dpd_action(config),
		.reqid = config->get_reqid(config),
		.mark_in = config->get_mark(config, TRUE),
		.mark_out = config->get_mark(config, FALSE),
	);

	this->config = config;
	config->get_ref(config);

	if (!this->reqid)
	{
		/* reuse old reqid if we are rekeying an existing CHILD_SA */
		this->reqid = rekey ? rekey : ++reqid;
	}

	/* MIPv6 proxy transport mode sets SA endpoints to TS hosts */
	if (config->get_mode(config) == MODE_TRANSPORT &&
		config->use_proxy_mode(config))
	{
		ts_type_t type;
		int family;
		chunk_t addr;
		host_t *host;
		enumerator_t *enumerator;
		linked_list_t *my_ts_list, *other_ts_list;
		traffic_selector_t *my_ts, *other_ts;

		this->mode = MODE_TRANSPORT;

		my_ts_list = config->get_traffic_selectors(config, TRUE, NULL, me);
		enumerator = my_ts_list->create_enumerator(my_ts_list);
		if (enumerator->enumerate(enumerator, &my_ts))
		{
			if (my_ts->is_host(my_ts, NULL) &&
			   !my_ts->is_host(my_ts, this->my_addr))
			{
				type = my_ts->get_type(my_ts);
				family = (type == TS_IPV4_ADDR_RANGE) ? AF_INET : AF_INET6;
				addr = my_ts->get_from_address(my_ts);
				host = host_create_from_chunk(family, addr, 0);
				free(addr.ptr);
				DBG1(DBG_CHD, "my address: %H is a transport mode proxy for %H",
							   this->my_addr, host);
				this->my_addr->destroy(this->my_addr);
				this->my_addr = host;
			}
		}
		enumerator->destroy(enumerator);
		my_ts_list->destroy_offset(my_ts_list, offsetof(traffic_selector_t, destroy));

		other_ts_list = config->get_traffic_selectors(config, FALSE, NULL, other);
		enumerator = other_ts_list->create_enumerator(other_ts_list);
		if (enumerator->enumerate(enumerator, &other_ts))
		{
			if (other_ts->is_host(other_ts, NULL) &&
			   !other_ts->is_host(other_ts, this->other_addr))
			{
				type = other_ts->get_type(other_ts);
				family = (type == TS_IPV4_ADDR_RANGE) ? AF_INET : AF_INET6;
				addr = other_ts->get_from_address(other_ts);
				host = host_create_from_chunk(family, addr, 0);
				free(addr.ptr);
				DBG1(DBG_CHD, "other address: %H is a transport mode proxy for %H",
							   this->other_addr, host);
				this->other_addr->destroy(this->other_addr);
				this->other_addr = host;
			}
		}
		enumerator->destroy(enumerator);
		other_ts_list->destroy_offset(other_ts_list, offsetof(traffic_selector_t, destroy));
	}

	return &this->public;
}
