ipsec_SCRIPTS = _keycensor
CLEANFILES = _keycensor
dist_man8_MANS = _keycensor.8
EXTRA_DIST = _keycensor.in

_keycensor : _keycensor.in
	sed \
	-e "s:@IPSEC_SBINDIR@:$(sbindir):" \
	$(srcdir)/$@.in > $@
	chmod +x $@
