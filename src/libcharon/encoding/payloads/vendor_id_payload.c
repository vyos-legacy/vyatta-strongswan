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

#include "vendor_id_payload.h"

typedef struct private_vendor_id_payload_t private_vendor_id_payload_t;

/**
 * Private data of an vendor_id_payload_t object.
 */
struct private_vendor_id_payload_t {

	/**
	 * Public vendor_id_payload_t interface.
	 */
	vendor_id_payload_t public;

	/**
	 * Next payload type.
	 */
	u_int8_t  next_payload;

	/**
	 * Critical flag.
	 */
	bool critical;

	/**
<<<<<<< HEAD
=======
	 * Reserved bits
	 */
	bool reserved[7];

	/**
>>>>>>> upstream/4.5.1
	 * Length of this payload.
	 */
	u_int16_t payload_length;

	/**
	 * The contained data.
	 */
	chunk_t data;
};

/**
 * Encoding rules to parse or generate a VENDOR ID payload
 *
 * The defined offsets are the positions in a object of type
 * private_vendor_id_payload_t.
 */
encoding_rule_t vendor_id_payload_encodings[] = {
	/* 1 Byte next payload type, stored in the field next_payload */
<<<<<<< HEAD
	{ U_INT_8,			offsetof(private_vendor_id_payload_t, next_payload) },
	/* the critical bit */
	{ FLAG,				offsetof(private_vendor_id_payload_t, critical)		},
	/* 7 Bit reserved bits, nowhere stored */
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	{ RESERVED_BIT,	0 														},
	/* Length of the whole payload*/
	{ PAYLOAD_LENGTH,	offsetof(private_vendor_id_payload_t, payload_length)},
	/* some vendor_id data bytes, length is defined in PAYLOAD_LENGTH */
	{ VID_DATA,			offsetof(private_vendor_id_payload_t, data) }
=======
	{ U_INT_8,			offsetof(private_vendor_id_payload_t, next_payload)	},
	/* the critical bit */
	{ FLAG,				offsetof(private_vendor_id_payload_t, critical)		},
	/* 7 Bit reserved bits, nowhere stored */
	{ RESERVED_BIT,		offsetof(private_vendor_id_payload_t, reserved[0])	},
	{ RESERVED_BIT,		offsetof(private_vendor_id_payload_t, reserved[1])	},
	{ RESERVED_BIT,		offsetof(private_vendor_id_payload_t, reserved[2])	},
	{ RESERVED_BIT,		offsetof(private_vendor_id_payload_t, reserved[3])	},
	{ RESERVED_BIT,		offsetof(private_vendor_id_payload_t, reserved[4])	},
	{ RESERVED_BIT,		offsetof(private_vendor_id_payload_t, reserved[5])	},
	{ RESERVED_BIT,		offsetof(private_vendor_id_payload_t, reserved[6])	},
	/* Length of the whole payload*/
	{ PAYLOAD_LENGTH,	offsetof(private_vendor_id_payload_t, payload_length)},
	/* some vendor_id data bytes, length is defined in PAYLOAD_LENGTH */
	{ VID_DATA,			offsetof(private_vendor_id_payload_t, data)			}
>>>>>>> upstream/4.5.1
};

/*
                           1                   2                   3
       0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      ! Next Payload  !C!  RESERVED   !         Payload Length        !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      +                                                               !
      ~                            VID Data                           ~
      !                                                               !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/

<<<<<<< HEAD
/**
 * Implementation of payload_t.verify.
 */
static status_t verify(private_vendor_id_payload_t *this)
=======
METHOD(payload_t, verify, status_t,
	private_vendor_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return SUCCESS;
}

<<<<<<< HEAD
/**
 * Implementation of vendor_id_payload_t.get_encoding_rules.
 */
static void get_encoding_rules(private_vendor_id_payload_t *this,
							   encoding_rule_t **rules, size_t *rule_count)
{
	*rules = vendor_id_payload_encodings;
	*rule_count = sizeof(vendor_id_payload_encodings) / sizeof(encoding_rule_t);
}

/**
 * Implementation of payload_t.get_type.
 */
static payload_type_t get_payload_type(private_vendor_id_payload_t *this)
=======
METHOD(payload_t, get_encoding_rules, void,
	private_vendor_id_payload_t *this, encoding_rule_t **rules,
	size_t *rule_count)
{
	*rules = vendor_id_payload_encodings;
	*rule_count = countof(vendor_id_payload_encodings);
}

METHOD(payload_t, get_type, payload_type_t,
	private_vendor_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return VENDOR_ID;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_next_type.
 */
static payload_type_t get_next_type(private_vendor_id_payload_t *this)
=======
METHOD(payload_t, get_next_type, payload_type_t,
	private_vendor_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->next_payload;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.set_next_type.
 */
static void set_next_type(private_vendor_id_payload_t *this,payload_type_t type)
=======
METHOD(payload_t, set_next_type, void,
	private_vendor_id_payload_t *this, payload_type_t type)
>>>>>>> upstream/4.5.1
{
	this->next_payload = type;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_length.
 */
static size_t get_length(private_vendor_id_payload_t *this)
=======
METHOD(payload_t, get_length, size_t,
	private_vendor_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->payload_length;
}

<<<<<<< HEAD
/**
 * Implementation of vendor_id_payload_t.get_data.
 */
static chunk_t get_data(private_vendor_id_payload_t *this)
=======
METHOD(vendor_id_payload_t, get_data, chunk_t,
	private_vendor_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->data;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.destroy and vendor_id_payload_t.destroy.
 */
static void destroy(private_vendor_id_payload_t *this)
=======
METHOD2(payload_t, vendor_id_payload_t, destroy, void,
	private_vendor_id_payload_t *this)
>>>>>>> upstream/4.5.1
{
	free(this->data.ptr);
	free(this);
}

/*
 * Described in header
 */
<<<<<<< HEAD
vendor_id_payload_t *vendor_id_payload_create()
{
	private_vendor_id_payload_t *this = malloc_thing(private_vendor_id_payload_t);

	this->public.payload_interface.verify = (status_t (*) (payload_t *))verify;
	this->public.payload_interface.get_encoding_rules = (void (*) (payload_t *, encoding_rule_t **, size_t *) ) get_encoding_rules;
	this->public.payload_interface.get_length = (size_t (*) (payload_t *)) get_length;
	this->public.payload_interface.get_next_type = (payload_type_t (*) (payload_t *)) get_next_type;
	this->public.payload_interface.set_next_type = (void (*) (payload_t *,payload_type_t)) set_next_type;
	this->public.payload_interface.get_type = (payload_type_t (*) (payload_t *)) get_payload_type;
	this->public.payload_interface.destroy = (void (*) (payload_t *))destroy;
	this->public.get_data = (chunk_t (*) (vendor_id_payload_t *)) get_data;

	this->critical = FALSE;
	this->next_payload = NO_PAYLOAD;
	this->payload_length = VENDOR_ID_PAYLOAD_HEADER_LENGTH;
	this->data = chunk_empty;

=======
vendor_id_payload_t *vendor_id_payload_create_data(chunk_t data)
{
	private_vendor_id_payload_t *this;

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
			.get_data = _get_data,
			.destroy = _destroy,
		},
		.next_payload = NO_PAYLOAD,
		.payload_length = VENDOR_ID_PAYLOAD_HEADER_LENGTH + data.len,
		.data = data,
	);
>>>>>>> upstream/4.5.1
	return &this->public;
}

/*
 * Described in header
 */
<<<<<<< HEAD
vendor_id_payload_t *vendor_id_payload_create_data(chunk_t data)
{
	private_vendor_id_payload_t *this;

	this = (private_vendor_id_payload_t*)vendor_id_payload_create();
	this->payload_length += data.len;
	this->data = data;

	return &this->public;
}

=======
vendor_id_payload_t *vendor_id_payload_create()
{
	return vendor_id_payload_create_data(chunk_empty);
}
>>>>>>> upstream/4.5.1
