ipsec_SCRIPTS = newhostkey
CLEANFILES = newhostkey
dist_man8_MANS = newhostkey.8
EXTRA_DIST = newhostkey.in

newhostkey : newhostkey.in
	sed \
	-e "s:@IPSEC_SBINDIR@:$(sbindir):" \
	$(srcdir)/$@.in > $@
	chmod +x $@
