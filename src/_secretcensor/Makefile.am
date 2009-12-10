ipsec_SCRIPTS = _secretcensor
CLEANFILES = _secretcensor
dist_man8_MANS = _secretcensor.8
EXTRA_DIST = _secretcensor.in

_secretcensor : _secretcensor.in
	sed \
	-e "s:@IPSEC_SBINDIR@:$(sbindir):" \
	$(srcdir)/$@.in > $@
	chmod +x $@
