
INCLUDES = -I$(top_srcdir)/src/libstrongswan -I$(top_srcdir)/src/libhydra \
<<<<<<< HEAD
	-I$(top_srcdir)/src/libcharon `xml2-config --cflags`

AM_CFLAGS = -rdynamic

libstrongswan_tnc_imc_la_LIBADD = -ltnc

=======
	-I$(top_srcdir)/src/libcharon

AM_CFLAGS = -rdynamic

>>>>>>> upstream/4.5.1
if MONOLITHIC
noinst_LTLIBRARIES = libstrongswan-tnc-imc.la
else
plugin_LTLIBRARIES = libstrongswan-tnc-imc.la
endif

libstrongswan_tnc_imc_la_SOURCES = \
<<<<<<< HEAD
	tnc_imc_plugin.h tnc_imc_plugin.c
=======
	tnc_imc_plugin.h tnc_imc_plugin.c tnc_imc.h tnc_imc.c \
	tnc_imc_manager.h tnc_imc_manager.c tnc_imc_bind_function.c
>>>>>>> upstream/4.5.1

libstrongswan_tnc_imc_la_LDFLAGS = -module -avoid-version

