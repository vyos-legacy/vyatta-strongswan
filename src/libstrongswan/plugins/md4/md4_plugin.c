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

#include "md4_plugin.h"

#include <library.h>
#include "md4_hasher.h"

<<<<<<< HEAD
=======
static const char *plugin_name = "md4";

>>>>>>> upstream/4.5.1
typedef struct private_md4_plugin_t private_md4_plugin_t;

/**
 * private data of md4_plugin
 */
struct private_md4_plugin_t {

	/**
	 * public functions
	 */
	md4_plugin_t public;
};

<<<<<<< HEAD
/**
 * Implementation of md4_plugin_t.destroy
 */
static void destroy(private_md4_plugin_t *this)
=======
METHOD(plugin_t, destroy, void,
	private_md4_plugin_t *this)
>>>>>>> upstream/4.5.1
{
	lib->crypto->remove_hasher(lib->crypto,
							   (hasher_constructor_t)md4_hasher_create);
	free(this);
}

/*
 * see header file
 */
plugin_t *md4_plugin_create()
{
<<<<<<< HEAD
	private_md4_plugin_t *this = malloc_thing(private_md4_plugin_t);

	this->public.plugin.destroy = (void(*)(plugin_t*))destroy;

	lib->crypto->add_hasher(lib->crypto, HASH_MD4,
=======
	private_md4_plugin_t *this;

	INIT(this,
		.public = {
			.plugin = {
				.destroy = _destroy,
			},
		},
	);

	lib->crypto->add_hasher(lib->crypto, HASH_MD4, plugin_name,
>>>>>>> upstream/4.5.1
							(hasher_constructor_t)md4_hasher_create);

	return &this->public.plugin;
}

