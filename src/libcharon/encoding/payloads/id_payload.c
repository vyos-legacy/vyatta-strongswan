/*
<<<<<<< HEAD
 * Copyright (C) 2007 Tobias Brunner
 * Copyright (C) 2005-2006 Martin Willi
=======
 * Copyright (C) 2005-2010 Martin Willi
 * Copyright (C) 2010 revosec AG
 * Copyright (C) 2007 Tobias Brunner
>>>>>>> upstream/4.5.1
 * Copyright (C) 2005 Jan Hutter
 *
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

#include "id_payload.h"

#include <daemon.h>
#include <encoding/payloads/encodings.h>

typedef struct private_id_payload_t private_id_payload_t;

/**
 * Private data of an id_payload_t object.
 *
 */
struct private_id_payload_t {
	/**
	 * Public id_payload_t interface.
	 */
	id_payload_t public;

	/**
	 * one of ID_INITIATOR, ID_RESPONDER
	 */
	payload_type_t payload_type;

	/**
	 * Next payload type.
	 */
	u_int8_t next_payload;

	/**
	 * Critical flag.
	 */
	bool critical;

	/**
<<<<<<< HEAD
=======
	 * Reserved bits
	 */
	bool reserved_bit[7];

	/**
	 * Reserved bytes
	 */
	u_int8_t reserved_byte[3];

	/**
>>>>>>> upstream/4.5.1
	 * Length of this payload.
	 */
	u_int16_t payload_length;

	/**
	 * Type of the ID Data.
	 */
	u_int8_t id_type;

	/**
	 * The contained id data value.
	 */
	chunk_t id_data;
};

/**
 * Encoding rules to parse or generate a ID payload
 *
 * The defined offsets are the positions in a object of type
 * private_id_payload_t.
<<<<<<< HEAD
 *
=======
>>>>>>> upstream/4.5.1
 */
encoding_rule_t id_payload_encodings[] = {
	/* 1 Byte next payload type, stored in the field next_payload */
	{ U_INT_8,			offsetof(private_id_payload_t, next_payload) 	},
	/* the critical bit */
	{ FLAG,				offsetof(private_id_payload_t, critical) 		},
<<<<<<< HEAD
	/* 7 Bit reserved bits, nowhere stored */
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
=======
	/* 7 Bit reserved bits */
	{ RESERVED_BIT,		offsetof(private_id_payload_t, reserved_bit[0])	},
	{ RESERVED_BIT,		offsetof(private_id_payload_t, reserved_bit[1])	},
	{ RESERVED_BIT,		offsetof(private_id_payload_t, reserved_bit[2])	},
	{ RESERVED_BIT,		offsetof(private_id_payload_t, reserved_bit[3])	},
	{ RESERVED_BIT,		offsetof(private_id_payload_t, reserved_bit[4])	},
	{ RESERVED_BIT,		offsetof(private_id_payload_t, reserved_bit[5])	},
	{ RESERVED_BIT,		offsetof(private_id_payload_t, reserved_bit[6])	},
>>>>>>> upstream/4.5.1
	/* Length of the whole payload*/
	{ PAYLOAD_LENGTH,	offsetof(private_id_payload_t, payload_length) 	},
	/* 1 Byte ID type*/
	{ U_INT_8,			offsetof(private_id_payload_t, id_type)			},
	/* 3 reserved bytes */
<<<<<<< HEAD
	{ RESERVED_BYTE,	0 												},
	{ RESERVED_BYTE,	0 												},
	{ RESERVED_BYTE,	0 												},
	/* some id data bytes, length is defined in PAYLOAD_LENGTH */
	{ ID_DATA,			offsetof(private_id_payload_t, id_data) 		}
=======
	{ RESERVED_BYTE,	offsetof(private_id_payload_t, reserved_byte[0])},
	{ RESERVED_BYTE,	offsetof(private_id_payload_t, reserved_byte[1])},
	{ RESERVED_BYTE,	offsetof(private_id_payload_t, reserved_byte[2])},
	/* some id data bytes, length is defined in PAYLOAD_LENGTH */
	{ ID_DATA,			offsetof(private_id_payload_t, id_data)			}
>>>>>>> upstream/4.5.1
};

/*
                           1                   2                   3
       0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      ! Next Payload  !C!  RESERVED   !         Payload Length        !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      !   ID Type     !                 RESERVED                      |
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      !                                                               !
      ~                   Identification Data                         ~
      !                                                               !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/

<<<<<<< HEAD
/**
 * Implementation of payload_t.verify.
 */
static status_t verify(private_id_payload_t *this)
{
	if ((this->id_type == 0) ||
		(this->id_type == 4) ||
		((this->id_type >= 6) && (this->id_type <= 8)) ||
		((this->id_type >= 12) && (this->id_type <= 200)))
=======
METHOD(payload_t, verify, status_t,
	private_id_payload_t *this)
{
	if (this->id_type == 0 || this->id_type == 4)
>>>>>>> upstream/4.5.1
	{
		/* reserved IDs */
		DBG1(DBG_ENC, "received ID with reserved type %d", this->id_type);
		return FAILED;
	}
<<<<<<< HEAD

	return SUCCESS;
}

/**
 * Implementation of id_payload_t.get_encoding_rules.
 */
static void get_encoding_rules(private_id_payload_t *this, encoding_rule_t **rules, size_t *rule_count)
{
	*rules = id_payload_encodings;
	*rule_count = sizeof(id_payload_encodings) / sizeof(encoding_rule_t);
}

/**
 * Implementation of payload_t.get_type.
 */
static payload_type_t get_payload_type(private_id_payload_t *this)
=======
	return SUCCESS;
}

METHOD(payload_t, get_encoding_rules, void,
	private_id_payload_t *this, encoding_rule_t **rules, size_t *rule_count)
{
	*rules = id_payload_encodings;
	*rule_count = countof(id_payload_encodings);
}

METHOD(payload_t, get_type, payload_type_t,
	private_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->payload_type;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_next_type.
 */
static payload_type_t get_next_type(private_id_payload_t *this)
=======
METHOD(payload_t, get_next_type, payload_type_t,
	private_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->next_payload;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.set_next_type.
 */
static void set_next_type(private_id_payload_t *this,payload_type_t type)
=======
METHOD(payload_t, set_next_type, void,
	private_id_payload_t *this, payload_type_t type)
>>>>>>> upstream/4.5.1
{
	this->next_payload = type;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_length.
 */
static size_t get_length(private_id_payload_t *this)
=======
METHOD(payload_t, get_length, size_t,
	private_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->payload_length;
}

<<<<<<< HEAD
/**
 * Implementation of id_payload_t.set_type.
 */
static void set_id_type (private_id_payload_t *this, id_type_t type)
{
	this->id_type = type;
}

/**
 * Implementation of id_payload_t.get_id_type.
 */
static id_type_t get_id_type (private_id_payload_t *this)
{
	return (this->id_type);
}

/**
 * Implementation of id_payload_t.set_data.
 */
static void set_data (private_id_payload_t *this, chunk_t data)
{
	if (this->id_data.ptr != NULL)
	{
		chunk_free(&(this->id_data));
	}
	this->id_data.ptr = clalloc(data.ptr,data.len);
	this->id_data.len = data.len;
	this->payload_length = ID_PAYLOAD_HEADER_LENGTH + this->id_data.len;
}


/**
 * Implementation of id_payload_t.get_data_clone.
 */
static chunk_t get_data (private_id_payload_t *this)
{
	return (this->id_data);
}

/**
 * Implementation of id_payload_t.get_data_clone.
 */
static chunk_t get_data_clone (private_id_payload_t *this)
{
	chunk_t cloned_data;
	if (this->id_data.ptr == NULL)
	{
		return (this->id_data);
	}
	cloned_data.ptr = clalloc(this->id_data.ptr,this->id_data.len);
	cloned_data.len = this->id_data.len;
	return cloned_data;
}

/**
 * Implementation of id_payload_t.get_identification.
 */
static identification_t *get_identification (private_id_payload_t *this)
{
	return identification_create_from_encoding(this->id_type,this->id_data);
}

/**
 * Implementation of payload_t.destroy and id_payload_t.destroy.
 */
static void destroy(private_id_payload_t *this)
{
	if (this->id_data.ptr != NULL)
	{
		chunk_free(&(this->id_data));
	}
=======
METHOD(id_payload_t, get_identification, identification_t*,
	private_id_payload_t *this)
{
	return identification_create_from_encoding(this->id_type, this->id_data);
}

METHOD2(payload_t, id_payload_t, destroy, void,
	private_id_payload_t *this)
{
	free(this->id_data.ptr);
>>>>>>> upstream/4.5.1
	free(this);
}

/*
 * Described in header.
 */
id_payload_t *id_payload_create(payload_type_t payload_type)
{
<<<<<<< HEAD
	private_id_payload_t *this = malloc_thing(private_id_payload_t);

	/* interface functions */
	this->public.payload_interface.verify = (status_t (*) (payload_t *))verify;
	this->public.payload_interface.get_encoding_rules = (void (*) (payload_t *, encoding_rule_t **, size_t *) ) get_encoding_rules;
	this->public.payload_interface.get_length = (size_t (*) (payload_t *)) get_length;
	this->public.payload_interface.get_next_type = (payload_type_t (*) (payload_t *)) get_next_type;
	this->public.payload_interface.set_next_type = (void (*) (payload_t *,payload_type_t)) set_next_type;
	this->public.payload_interface.get_type = (payload_type_t (*) (payload_t *)) get_payload_type;
	this->public.payload_interface.destroy = (void (*) (payload_t *))destroy;

	/* public functions */
	this->public.destroy = (void (*) (id_payload_t *)) destroy;
	this->public.set_id_type = (void (*) (id_payload_t *,id_type_t)) set_id_type;
	this->public.get_id_type = (id_type_t (*) (id_payload_t *)) get_id_type;
	this->public.set_data = (void (*) (id_payload_t *,chunk_t)) set_data;
	this->public.get_data = (chunk_t (*) (id_payload_t *)) get_data;
	this->public.get_data_clone = (chunk_t (*) (id_payload_t *)) get_data_clone;

	this->public.get_identification = (identification_t * (*) (id_payload_t *this)) get_identification;

	/* private variables */
	this->critical = FALSE;
	this->next_payload = NO_PAYLOAD;
	this->payload_length =ID_PAYLOAD_HEADER_LENGTH;
	this->id_data = chunk_empty;
	this->payload_type = payload_type;

	return (&(this->public));
=======
	private_id_payload_t *this;

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
			.get_identification = _get_identification,
			.destroy = _destroy,
		},
		.next_payload = NO_PAYLOAD,
		.payload_length = ID_PAYLOAD_HEADER_LENGTH,
		.payload_type = payload_type,
	);
	return &this->public;
>>>>>>> upstream/4.5.1
}

/*
 * Described in header.
 */
<<<<<<< HEAD
id_payload_t *id_payload_create_from_identification(payload_type_t payload_type, identification_t *identification)
{
	id_payload_t *this= id_payload_create(payload_type);
	this->set_data(this,identification->get_encoding(identification));
	this->set_id_type(this,identification->get_type(identification));
	return this;
=======
id_payload_t *id_payload_create_from_identification(payload_type_t payload_type,
													identification_t *id)
{
	private_id_payload_t *this;

	this = (private_id_payload_t*)id_payload_create(payload_type);
	this->id_data = chunk_clone(id->get_encoding(id));
	this->id_type = id->get_type(id);
	this->payload_length += this->id_data.len;

	return &this->public;
>>>>>>> upstream/4.5.1
}
