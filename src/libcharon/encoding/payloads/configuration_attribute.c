/*
<<<<<<< HEAD
 * Copyright (C) 2005-2009 Martin Willi
=======
 * Copyright (C) 2005-2010 Martin Willi
 * Copyright (C) 2010 revosec AG
>>>>>>> upstream/4.5.1
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

#include <stddef.h>

#include "configuration_attribute.h"

#include <encoding/payloads/encodings.h>
#include <library.h>
#include <daemon.h>

<<<<<<< HEAD

=======
>>>>>>> upstream/4.5.1
typedef struct private_configuration_attribute_t private_configuration_attribute_t;

/**
 * Private data of an configuration_attribute_t object.
<<<<<<< HEAD
 *
 */
struct private_configuration_attribute_t {
=======
 */
struct private_configuration_attribute_t {

>>>>>>> upstream/4.5.1
	/**
	 * Public configuration_attribute_t interface.
	 */
	configuration_attribute_t public;

	/**
<<<<<<< HEAD
=======
	 * Reserved bit
	 */
	bool reserved;

	/**
>>>>>>> upstream/4.5.1
	 * Type of the attribute.
	 */
	u_int16_t type;

	/**
	 * Length of the attribute.
	 */
	u_int16_t length;

	/**
	 * Attribute value as chunk.
	 */
	chunk_t value;
};

/**
 * Encoding rules to parse or generate a configuration attribute.
 *
 * The defined offsets are the positions in a object of type
 * private_configuration_attribute_t.
 */
encoding_rule_t configuration_attribute_encodings[] = {
<<<<<<< HEAD

	{ RESERVED_BIT,						0													},
=======
	/* 1 reserved bit */
	{ RESERVED_BIT,						offsetof(private_configuration_attribute_t, reserved)},
>>>>>>> upstream/4.5.1
	/* type of the attribute as 15 bit unsigned integer */
	{ ATTRIBUTE_TYPE,					offsetof(private_configuration_attribute_t, type)	},
	/* Length of attribute value */
	{ CONFIGURATION_ATTRIBUTE_LENGTH,	offsetof(private_configuration_attribute_t, length)	},
	/* Value of attribute if attribute format flag is zero */
	{ CONFIGURATION_ATTRIBUTE_VALUE,	offsetof(private_configuration_attribute_t, value)	}
};

/*
                           1                   2                   3
       0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      !R|         Attribute Type      !            Length             |
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      |                                                               |
      ~                             Value                             ~
      |                                                               |
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/

<<<<<<< HEAD
/**
 * Implementation of payload_t.verify.
 */
static status_t verify(private_configuration_attribute_t *this)
=======
METHOD(payload_t, verify, status_t,
	private_configuration_attribute_t *this)
>>>>>>> upstream/4.5.1
{
	bool failed = FALSE;

	if (this->length != this->value.len)
	{
		DBG1(DBG_ENC, "invalid attribute length");
		return FAILED;
	}

	switch (this->type)
	{
		 case INTERNAL_IP4_ADDRESS:
		 case INTERNAL_IP4_NETMASK:
		 case INTERNAL_IP4_DNS:
		 case INTERNAL_IP4_NBNS:
		 case INTERNAL_ADDRESS_EXPIRY:
		 case INTERNAL_IP4_DHCP:
			if (this->length != 0 && this->length != 4)
			{
				failed = TRUE;
			}
			break;
		 case INTERNAL_IP4_SUBNET:
			if (this->length != 0 && this->length != 8)
			{
				failed = TRUE;
			}
			break;
		 case INTERNAL_IP6_ADDRESS:
		 case INTERNAL_IP6_SUBNET:
			if (this->length != 0 && this->length != 17)
			{
				failed = TRUE;
			}
			break;
		 case INTERNAL_IP6_DNS:
		 case INTERNAL_IP6_NBNS:
		 case INTERNAL_IP6_DHCP:
			if (this->length != 0 && this->length != 16)
			{
				failed = TRUE;
			}
			break;
		 case SUPPORTED_ATTRIBUTES:
			if (this->length % 2)
			{
				failed = TRUE;
			}
			break;
		 case APPLICATION_VERSION:
			/* any length acceptable */
			break;
		 default:
			DBG1(DBG_ENC, "unknown attribute type %N",
				 configuration_attribute_type_names, this->type);
			break;
	}

	if (failed)
	{
		DBG1(DBG_ENC, "invalid attribute length %d for %N",
			 this->length, configuration_attribute_type_names, this->type);
		return FAILED;
	}
	return SUCCESS;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_encoding_rules.
 */
static void get_encoding_rules(private_configuration_attribute_t *this,
							   encoding_rule_t **rules, size_t *rule_count)
{
	*rules = configuration_attribute_encodings;
	*rule_count = sizeof(configuration_attribute_encodings) / sizeof(encoding_rule_t);
}

/**
 * Implementation of payload_t.get_type.
 */
static payload_type_t get_type(private_configuration_attribute_t *this)
=======
METHOD(payload_t, get_encoding_rules, void,
	private_configuration_attribute_t *this, encoding_rule_t **rules,
	size_t *rule_count)
{
	*rules = configuration_attribute_encodings;
	*rule_count = countof(configuration_attribute_encodings);
}

METHOD(payload_t, get_type, payload_type_t,
	private_configuration_attribute_t *this)
>>>>>>> upstream/4.5.1
{
	return CONFIGURATION_ATTRIBUTE;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_next_type.
 */
static payload_type_t get_next_type(private_configuration_attribute_t *this)
=======
METHOD(payload_t, get_next_type, payload_type_t,
	private_configuration_attribute_t *this)
>>>>>>> upstream/4.5.1
{
	return NO_PAYLOAD;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.set_next_type.
 */
static void set_next_type(private_configuration_attribute_t *this,
						  payload_type_t type)
{
}

/**
 * Implementation of configuration_attribute_t.get_length.
 */
static size_t get_length(private_configuration_attribute_t *this)
=======
METHOD(payload_t, set_next_type, void,
	private_configuration_attribute_t *this, payload_type_t type)
{
}

METHOD(payload_t, get_length, size_t,
	private_configuration_attribute_t *this)
>>>>>>> upstream/4.5.1
{
	return this->value.len + CONFIGURATION_ATTRIBUTE_HEADER_LENGTH;
}

<<<<<<< HEAD
/**
 * Implementation of configuration_attribute_t.get_type.
 */
static configuration_attribute_type_t get_configuration_attribute_type(
									private_configuration_attribute_t *this)
=======
METHOD(configuration_attribute_t, get_cattr_type, configuration_attribute_type_t,
	private_configuration_attribute_t *this)
>>>>>>> upstream/4.5.1
{
	return this->type;
}

<<<<<<< HEAD
/**
 * Implementation of configuration_attribute_t.get_value.
 */
static chunk_t get_value(private_configuration_attribute_t *this)
=======
METHOD(configuration_attribute_t, get_value, chunk_t,
	private_configuration_attribute_t *this)
>>>>>>> upstream/4.5.1
{
	return this->value;
}

<<<<<<< HEAD
/**
 * Implementation of configuration_attribute_t.destroy and payload_t.destroy.
 */
static void destroy(private_configuration_attribute_t *this)
=======
METHOD2(payload_t, configuration_attribute_t, destroy, void,
	private_configuration_attribute_t *this)
>>>>>>> upstream/4.5.1
{
	free(this->value.ptr);
	free(this);
}

/*
 * Described in header.
 */
configuration_attribute_t *configuration_attribute_create()
{
	private_configuration_attribute_t *this;

<<<<<<< HEAD
	this = malloc_thing(private_configuration_attribute_t);
	this->public.payload_interface.verify = (status_t(*)(payload_t *))verify;
	this->public.payload_interface.get_encoding_rules = (void(*)(payload_t *, encoding_rule_t **, size_t *) )get_encoding_rules;
	this->public.payload_interface.get_length = (size_t(*)(payload_t *))get_length;
	this->public.payload_interface.get_next_type = (payload_type_t(*)(payload_t *))get_next_type;
	this->public.payload_interface.set_next_type = (void(*)(payload_t *,payload_type_t))set_next_type;
	this->public.payload_interface.get_type = (payload_type_t(*)(payload_t *))get_type;
	this->public.payload_interface.destroy = (void(*)(payload_t*))destroy;

	this->public.get_value = (chunk_t(*)(configuration_attribute_t *))get_value;
	this->public.get_type = (configuration_attribute_type_t(*)(configuration_attribute_t *))get_configuration_attribute_type;
	this->public.destroy = (void (*)(configuration_attribute_t*))destroy;

	this->type = 0;
	this->value = chunk_empty;
	this->length = 0;

=======
	INIT(this,
		.public = {
			.payload_interface = {
				.verify = _verify,
				.get_encoding_rules = _get_encoding_rules,
				.get_length = _get_length,
				.get_next_type = _get_next_type,
				.set_next_type = _set_next_type,
				.get_type = _get_type,
				.destroy = _destroy,
			},
			.get_value = _get_value,
			.get_type = _get_cattr_type,
			.destroy = _destroy,
		},
	);
>>>>>>> upstream/4.5.1
	return &this->public;
}

/*
 * Described in header.
 */
configuration_attribute_t *configuration_attribute_create_value(
							configuration_attribute_type_t type, chunk_t value)
{
	private_configuration_attribute_t *this;

	this = (private_configuration_attribute_t*)configuration_attribute_create();
	this->type = ((u_int16_t)type) & 0x7FFF;
	this->value = chunk_clone(value);
	this->length = value.len;

	return &this->public;
}

