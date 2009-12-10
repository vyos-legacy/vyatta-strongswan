ipsec_SCRIPTS = _include
CLEANFILES = _include
dist_man8_MANS = _include.8
EXTRA_DIST = _include.in

_include : _include.in
	sed \
	-e "s:@IPSEC_SBINDIR@:$(sbindir):" \
	$(srcdir)/$@.in > $@
	chmod +x $@
