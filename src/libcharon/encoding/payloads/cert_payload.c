/*
 * Copyright (C) 2008 Tobias Brunner
<<<<<<< HEAD
 * Copyright (C) 2005-2007 Martin Willi
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
#include <ctype.h>

#include <daemon.h>

#include "cert_payload.h"

ENUM(cert_encoding_names, ENC_PKCS7_WRAPPED_X509, ENC_OCSP_CONTENT,
	"ENC_PKCS7_WRAPPED_X509",
	"ENC_PGP",
	"ENC_DNS_SIGNED_KEY",
	"ENC_X509_SIGNATURE",
	"ENC_X509_KEY_EXCHANGE",
	"ENC_KERBEROS_TOKENS",
	"ENC_CRL",
	"ENC_ARL",
	"ENC_SPKI",
	"ENC_X509_ATTRIBUTE",
	"ENC_RAW_RSA_KEY",
	"ENC_X509_HASH_AND_URL",
	"ENC_X509_HASH_AND_URL_BUNDLE",
	"ENC_OCSP_CONTENT",
);

typedef struct private_cert_payload_t private_cert_payload_t;

/**
 * Private data of an cert_payload_t object.
<<<<<<< HEAD
 *
 */
struct private_cert_payload_t {
=======
 */
struct private_cert_payload_t {

>>>>>>> upstream/4.5.1
	/**
	 * Public cert_payload_t interface.
	 */
	cert_payload_t public;

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
	 * reserved bits
	 */
	bool reserved[7];

	/**
>>>>>>> upstream/4.5.1
	 * Length of this payload.
	 */
	u_int16_t payload_length;

	/**
	 * Encoding of the CERT Data.
	 */
	u_int8_t encoding;

	/**
	 * The contained cert data value.
	 */
	chunk_t data;

	/**
	 * TRUE if the "Hash and URL" data is invalid
	 */
	bool invalid_hash_and_url;
};

/**
 * Encoding rules to parse or generate a CERT payload
 *
 * The defined offsets are the positions in a object of type
 * private_cert_payload_t.
 *
 */
encoding_rule_t cert_payload_encodings[] = {
	/* 1 Byte next payload type, stored in the field next_payload */
<<<<<<< HEAD
	{ U_INT_8,			offsetof(private_cert_payload_t, next_payload) 	},
	/* the critical bit */
	{ FLAG,				offsetof(private_cert_payload_t, critical) 		},
	/* 7 Bit reserved bits, nowhere stored */
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
	{ RESERVED_BIT,	0 													},
=======
	{ U_INT_8,			offsetof(private_cert_payload_t, next_payload)	},
	/* the critical bit */
	{ FLAG,				offsetof(private_cert_payload_t, critical)		},
	/* 7 Bit reserved bits, nowhere stored */
	{ RESERVED_BIT,		offsetof(private_cert_payload_t, reserved[0])	},
	{ RESERVED_BIT,		offsetof(private_cert_payload_t, reserved[1])	},
	{ RESERVED_BIT,		offsetof(private_cert_payload_t, reserved[2])	},
	{ RESERVED_BIT,		offsetof(private_cert_payload_t, reserved[3])	},
	{ RESERVED_BIT,		offsetof(private_cert_payload_t, reserved[4])	},
	{ RESERVED_BIT,		offsetof(private_cert_payload_t, reserved[5])	},
	{ RESERVED_BIT,		offsetof(private_cert_payload_t, reserved[6])	},
>>>>>>> upstream/4.5.1
	/* Length of the whole payload*/
	{ PAYLOAD_LENGTH,	offsetof(private_cert_payload_t, payload_length)},
	/* 1 Byte CERT type*/
	{ U_INT_8,			offsetof(private_cert_payload_t, encoding)		},
	/* some cert data bytes, length is defined in PAYLOAD_LENGTH */
<<<<<<< HEAD
	{ CERT_DATA,		offsetof(private_cert_payload_t, data) 			}
=======
	{ CERT_DATA,		offsetof(private_cert_payload_t, data)			}
>>>>>>> upstream/4.5.1
};

/*
                           1                   2                   3
       0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      ! Next Payload  !C!  RESERVED   !         Payload Length        !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
      ! Cert Encoding !                                               !
      +-+-+-+-+-+-+-+-+                                               !
      ~                       Certificate Data                        ~
      !                                                               !
      +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/

<<<<<<< HEAD
/**
 * Implementation of payload_t.verify.
 */
static status_t verify(private_cert_payload_t *this)
=======
METHOD(payload_t, verify, status_t,
	private_cert_payload_t *this)
>>>>>>> upstream/4.5.1
{
	if (this->encoding == ENC_X509_HASH_AND_URL ||
		this->encoding == ENC_X509_HASH_AND_URL_BUNDLE)
	{
<<<<<<< HEAD
=======
		int i;

>>>>>>> upstream/4.5.1
		/* coarse verification of "Hash and URL" encoded certificates */
		if (this->data.len <= 20)
		{
			DBG1(DBG_ENC, "invalid payload length for hash-and-url (%d), ignore",
<<<<<<< HEAD
					this->data.len);
			this->invalid_hash_and_url = TRUE;
			return SUCCESS;
		}

		int i = 20; /* skipping the hash */
		for (; i < this->data.len; ++i)
=======
				 this->data.len);
			this->invalid_hash_and_url = TRUE;
			return SUCCESS;
		}
		for (i = 20; i < this->data.len; ++i)
>>>>>>> upstream/4.5.1
		{
			if (this->data.ptr[i] == '\0')
			{
				/* null terminated, fine */
				return SUCCESS;
			}
			else if (!isprint(this->data.ptr[i]))
			{
				DBG1(DBG_ENC, "non printable characters in url of hash-and-url"
<<<<<<< HEAD
						" encoded certificate payload, ignore");
=======
					 " encoded certificate payload, ignore");
>>>>>>> upstream/4.5.1
				this->invalid_hash_and_url = TRUE;
				return SUCCESS;
			}
		}
<<<<<<< HEAD

		/* URL is not null terminated, correct that */
		chunk_t data = chunk_alloc(this->data.len + 1);
		memcpy(data.ptr, this->data.ptr, this->data.len);
		data.ptr[this->data.len] = '\0';
		chunk_free(&this->data);
		this->data = data;
=======
		/* URL is not null terminated, correct that */
		this->data = chunk_cat("mc", this->data, chunk_from_chars(0));
>>>>>>> upstream/4.5.1
	}
	return SUCCESS;
}

<<<<<<< HEAD
/**
 * Implementation of cert_payload_t.get_encoding_rules.
 */
static void get_encoding_rules(private_cert_payload_t *this,
							   encoding_rule_t **rules, size_t *rule_count)
{
	*rules = cert_payload_encodings;
	*rule_count = sizeof(cert_payload_encodings) / sizeof(encoding_rule_t);
}

/**
 * Implementation of payload_t.get_type.
 */
static payload_type_t get_payload_type(private_cert_payload_t *this)
=======
METHOD(payload_t, get_encoding_rules, void,
	private_cert_payload_t *this, encoding_rule_t **rules, size_t *rule_count)
{
	*rules = cert_payload_encodings;
	*rule_count = countof(cert_payload_encodings);
}

METHOD(payload_t, get_type, payload_type_t,
	private_cert_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return CERTIFICATE;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_next_type.
 */
static payload_type_t get_next_type(private_cert_payload_t *this)
=======
METHOD(payload_t, get_next_type, payload_type_t,
	private_cert_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->next_payload;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.set_next_type.
 */
static void set_next_type(private_cert_payload_t *this,payload_type_t type)
=======
METHOD(payload_t, set_next_type, void,
	private_cert_payload_t *this, payload_type_t type)
>>>>>>> upstream/4.5.1
{
	this->next_payload = type;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.get_length.
 */
static size_t get_length(private_cert_payload_t *this)
=======
METHOD(payload_t, get_length, size_t,
	private_cert_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->payload_length;
}

<<<<<<< HEAD
/**
 * Implementation of cert_payload_t.get_cert_encoding.
 */
static cert_encoding_t get_cert_encoding(private_cert_payload_t *this)
=======
METHOD(cert_payload_t, get_cert_encoding, cert_encoding_t,
	private_cert_payload_t *this)
>>>>>>> upstream/4.5.1
{
	return this->encoding;
}

<<<<<<< HEAD
/**
 * Implementation of cert_payload_t.get_cert.
 */
static certificate_t *get_cert(private_cert_payload_t *this)
{
	if (this->encoding != ENC_X509_SIGNATURE)
	{
		return NULL;
	}
	return lib->creds->create(lib->creds, CRED_CERTIFICATE, CERT_X509,
							  BUILD_BLOB_ASN1_DER, this->data,
							  BUILD_END);
}

/**
 * Implementation of cert_payload_t.get_hash.
 */
static chunk_t get_hash(private_cert_payload_t *this)
{
	chunk_t hash = chunk_empty;
	if ((this->encoding != ENC_X509_HASH_AND_URL &&
		this->encoding != ENC_X509_HASH_AND_URL_BUNDLE) ||
=======
METHOD(cert_payload_t, get_cert, certificate_t*,
	private_cert_payload_t *this)
{
	int type;

	switch (this->encoding)
	{
		case ENC_X509_SIGNATURE:
			type = CERT_X509;
			break;
		case ENC_CRL:
			type = CERT_X509_CRL;
			break;
		default:
			return NULL;
	}
	return lib->creds->create(lib->creds, CRED_CERTIFICATE, type,
							  BUILD_BLOB_ASN1_DER, this->data, BUILD_END);
}

METHOD(cert_payload_t, get_hash, chunk_t,
	private_cert_payload_t *this)
{
	chunk_t hash = chunk_empty;

	if ((this->encoding != ENC_X509_HASH_AND_URL &&
		 this->encoding != ENC_X509_HASH_AND_URL_BUNDLE) ||
>>>>>>> upstream/4.5.1
		this->invalid_hash_and_url)
	{
		return hash;
	}
	hash.ptr = this->data.ptr;
	hash.len = 20;
	return hash;
}

<<<<<<< HEAD
/**
 * Implementation of cert_payload_t.get_url.
 */
static char *get_url(private_cert_payload_t *this)
{
	if ((this->encoding != ENC_X509_HASH_AND_URL &&
		this->encoding != ENC_X509_HASH_AND_URL_BUNDLE) ||
=======
METHOD(cert_payload_t, get_url, char*,
	private_cert_payload_t *this)
{
	if ((this->encoding != ENC_X509_HASH_AND_URL &&
		 this->encoding != ENC_X509_HASH_AND_URL_BUNDLE) ||
>>>>>>> upstream/4.5.1
		this->invalid_hash_and_url)
	{
		return NULL;
	}
	return (char*)this->data.ptr + 20;
}

<<<<<<< HEAD
/**
 * Implementation of payload_t.destroy and cert_payload_t.destroy.
 */
static void destroy(private_cert_payload_t *this)
{
	chunk_free(&this->data);
=======
METHOD2(payload_t, cert_payload_t, destroy, void,
	private_cert_payload_t *this)
{
	free(this->data.ptr);
>>>>>>> upstream/4.5.1
	free(this);
}

/*
 * Described in header
 */
cert_payload_t *cert_payload_create()
{
<<<<<<< HEAD
	private_cert_payload_t *this = malloc_thing(private_cert_payload_t);

	this->public.payload_interface.verify = (status_t (*) (payload_t*))verify;
	this->public.payload_interface.get_encoding_rules = (void (*) (payload_t*,encoding_rule_t**, size_t*))get_encoding_rules;
	this->public.payload_interface.get_length = (size_t (*) (payload_t*))get_length;
	this->public.payload_interface.get_next_type = (payload_type_t (*) (payload_t*))get_next_type;
	this->public.payload_interface.set_next_type = (void (*) (payload_t*,payload_type_t))set_next_type;
	this->public.payload_interface.get_type = (payload_type_t (*) (payload_t*))get_payload_type;
	this->public.payload_interface.destroy = (void (*) (payload_t*))destroy;

	this->public.destroy = (void (*) (cert_payload_t*))destroy;
	this->public.get_cert = (certificate_t* (*) (cert_payload_t*))get_cert;
	this->public.get_cert_encoding = (cert_encoding_t (*) (cert_payload_t*))get_cert_encoding;
	this->public.get_hash = (chunk_t (*) (cert_payload_t*))get_hash;
	this->public.get_url = (char* (*) (cert_payload_t*))get_url;

	this->critical = FALSE;
	this->next_payload = NO_PAYLOAD;
	this->payload_length = CERT_PAYLOAD_HEADER_LENGTH;
	this->data = chunk_empty;
	this->encoding = 0;
	this->invalid_hash_and_url = FALSE;

=======
	private_cert_payload_t *this;

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
			.get_cert = _get_cert,
			.get_cert_encoding = _get_cert_encoding,
			.get_hash = _get_hash,
			.get_url = _get_url,
			.destroy = _destroy,
		},
		.next_payload = NO_PAYLOAD,
		.payload_length = CERT_PAYLOAD_HEADER_LENGTH,
	);
>>>>>>> upstream/4.5.1
	return &this->public;
}

/*
 * Described in header
 */
cert_payload_t *cert_payload_create_from_cert(certificate_t *cert)
{
	private_cert_payload_t *this = (private_cert_payload_t*)cert_payload_create();

	switch (cert->get_type(cert))
	{
		case CERT_X509:
			this->encoding = ENC_X509_SIGNATURE;
			break;
		default:
			DBG1(DBG_ENC, "embedding %N certificate in payload failed",
				 certificate_type_names, cert->get_type(cert));
			free(this);
			return NULL;
	}
	if (!cert->get_encoding(cert, CERT_ASN1_DER, &this->data))
	{
		DBG1(DBG_ENC, "encoding certificate for cert payload failed");
		free(this);
		return NULL;
	}
	this->payload_length = CERT_PAYLOAD_HEADER_LENGTH + this->data.len;
	return &this->public;
}

/*
 * Described in header
 */
cert_payload_t *cert_payload_create_from_hash_and_url(chunk_t hash, char *url)
{
	private_cert_payload_t *this = (private_cert_payload_t*)cert_payload_create();

	this->encoding = ENC_X509_HASH_AND_URL;
	this->data = chunk_cat("cc", hash, chunk_create(url, strlen(url)));
	this->payload_length = CERT_PAYLOAD_HEADER_LENGTH + this->data.len;
	return &this->public;
}

<<<<<<< HEAD
=======
/*
 * Described in header
 */
cert_payload_t *cert_payload_create_custom(cert_encoding_t type, chunk_t data)
{
	private_cert_payload_t *this = (private_cert_payload_t*)cert_payload_create();

	this->encoding = type;
	this->data = data;
	this->payload_length = CERT_PAYLOAD_HEADER_LENGTH + this->data.len;
	return &this->public;
}
>>>>>>> upstream/4.5.1
