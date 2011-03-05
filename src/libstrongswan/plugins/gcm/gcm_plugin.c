/*
 * Copyright (C) 2010 Martin Willi
 * Copyright (C) 2010 revosec AG
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

#include "gcm_plugin.h"

#include <library.h>

#include "gcm_aead.h"

<<<<<<< HEAD
=======
static const char *plugin_name = "gcm";

>>>>>>> upstream/4.5.1
typedef struct private_gcm_plugin_t private_gcm_plugin_t;

/**
 * private data of gcm_plugin
 */
struct private_gcm_plugin_t {

	/**
	 * public functions
	 */
	gcm_plugin_t public;
};

METHOD(plugin_t, destroy, void,
	private_gcm_plugin_t *this)
{
	lib->crypto->remove_aead(lib->crypto,
					(aead_constructor_t)gcm_aead_create);

	free(this);
}

/*
 * see header file
 */
plugin_t *gcm_plugin_create()
{
	private_gcm_plugin_t *this;
<<<<<<< HEAD
=======
	crypter_t *crypter;
>>>>>>> upstream/4.5.1

	INIT(this,
		.public.plugin.destroy = _destroy,
	);

<<<<<<< HEAD
	lib->crypto->add_aead(lib->crypto, ENCR_AES_GCM_ICV8,
					(aead_constructor_t)gcm_aead_create);
	lib->crypto->add_aead(lib->crypto, ENCR_AES_GCM_ICV12,
					(aead_constructor_t)gcm_aead_create);
	lib->crypto->add_aead(lib->crypto, ENCR_AES_GCM_ICV16,
					(aead_constructor_t)gcm_aead_create);
=======
	crypter = lib->crypto->create_crypter(lib->crypto, ENCR_AES_CBC, 0);
	if (crypter)
	{
		crypter->destroy(crypter);
		lib->crypto->add_aead(lib->crypto, ENCR_AES_GCM_ICV8, plugin_name,
						(aead_constructor_t)gcm_aead_create);
		lib->crypto->add_aead(lib->crypto, ENCR_AES_GCM_ICV12, plugin_name,
						(aead_constructor_t)gcm_aead_create);
		lib->crypto->add_aead(lib->crypto, ENCR_AES_GCM_ICV16, plugin_name,
						(aead_constructor_t)gcm_aead_create);
	}
>>>>>>> upstream/4.5.1

	return &this->public.plugin;
}
