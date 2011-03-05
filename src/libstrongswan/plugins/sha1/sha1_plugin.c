/*
 * Copyright (C) 2008 Martin Willi
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

#include "sha1_plugin.h"

#include <library.h>
#include "sha1_hasher.h"
#include "sha1_prf.h"

<<<<<<< HEAD
=======
static const char *plugin_name = "sha1";

>>>>>>> upstream/4.5.1
typedef struct private_sha1_plugin_t private_sha1_plugin_t;

/**
 * private data of sha1_plugin
 */
struct private_sha1_plugin_t {

	/**
	 * public functions
	 */
	sha1_plugin_t public;
};

<<<<<<< HEAD
/**
 * Implementation of sha1_plugin_t.destroy
 */
static void destroy(private_sha1_plugin_t *this)
=======
METHOD(plugin_t, destroy, void,
	private_sha1_plugin_t *this)
>>>>>>> upstream/4.5.1
{
	lib->crypto->remove_hasher(lib->crypto,
							   (hasher_constructor_t)sha1_hasher_create);
	lib->crypto->remove_prf(lib->crypto,
							   (prf_constructor_t)sha1_prf_create);
	free(this);
}

/*
 * see header file
 */
plugin_t *sha1_plugin_create()
{
<<<<<<< HEAD
	private_sha1_plugin_t *this = malloc_thing(private_sha1_plugin_t);

	this->public.plugin.destroy = (void(*)(plugin_t*))destroy;

	lib->crypto->add_hasher(lib->crypto, HASH_SHA1,
							(hasher_constructor_t)sha1_hasher_create);
	lib->crypto->add_prf(lib->crypto, PRF_KEYED_SHA1,
=======
	private_sha1_plugin_t *this;

	INIT(this,
		.public = {
			.plugin = {
				.destroy = _destroy,
			},
		},
	);

	lib->crypto->add_hasher(lib->crypto, HASH_SHA1, plugin_name,
							(hasher_constructor_t)sha1_hasher_create);
	lib->crypto->add_prf(lib->crypto, PRF_KEYED_SHA1, plugin_name,
>>>>>>> upstream/4.5.1
							(prf_constructor_t)sha1_prf_create);

	return &this->public.plugin;
}

