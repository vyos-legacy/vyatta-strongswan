ipsec_PROGRAMS = rsasigkey
rsasigkey_SOURCES = rsasigkey.c
dist_man_MANS = rsasigkey.8

INCLUDES = \
-I$(top_srcdir)/src/libstrongswan \
-I$(top_srcdir)/src/libfreeswan

AM_CFLAGS = \
  -DIPSEC_CONFDIR=\"${confdir}\" \
  -DSTRONGSWAN_CONF=\"${strongswan_conf}\" \
  -DIPSEC_PLUGINDIR=\"${plugindir}\" \
  -DPLUGINS=\""${libstrongswan_plugins}\""
  
rsasigkey_LDADD = $(top_builddir)/src/libfreeswan/libfreeswan.a \
$(top_builddir)/src/libstrongswan/libstrongswan.la -lgmp
