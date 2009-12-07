ipsec_SCRIPTS = barf
CLEANFILES = barf
dist_man8_MANS = barf.8
EXTRA_DIST = barf.in

barf : barf.in
	sed \
	-e "s:@IPSEC_SBINDIR@:$(sbindir):" \
	$(srcdir)/$@.in > $@
	chmod +x $@
