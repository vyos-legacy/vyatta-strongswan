
INCLUDES = -I$(top_srcdir)/src/libstrongswan -I$(top_srcdir)/src/libhydra \
<<<<<<< HEAD
	-I$(top_srcdir)/src/libcharon `xml2-config --cflags`

AM_CFLAGS = -rdynamic

libstrongswan_tnc_imv_la_LIBADD = -ltnc

=======
	-I$(top_srcdir)/src/libcharon

AM_CFLAGS = -rdynamic

>>>>>>> upstream/4.5.1
if MONOLITHIC
noinst_LTLIBRARIES = libstrongswan-tnc-imv.la
else
plugin_LTLIBRARIES = libstrongswan-tnc-imv.la
endif

libstrongswan_tnc_imv_la_SOURCES = \
<<<<<<< HEAD
	tnc_imv_plugin.h tnc_imv_plugin.c
=======
	tnc_imv_plugin.h tnc_imv_plugin.c tnc_imv.h tnc_imv.c \
	tnc_imv_manager.h tnc_imv_manager.c tnc_imv_bind_function.c \
	tnc_imv_recommendations.h tnc_imv_recommendations.c
>>>>>>> upstream/4.5.1

libstrongswan_tnc_imv_la_LDFLAGS = -module -avoid-version

