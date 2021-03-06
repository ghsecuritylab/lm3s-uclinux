# This script was automatically generated from the dsa-558
# Debian Security Advisory
# It is released under the Nessus Script Licence.
# Advisory is copyright 1997-2004 Software in the Public Interest, Inc.
# See http://www.debian.org/license
# DSA2nasl Convertor is copyright 2004 Michel Arboi

if (! defined_func('bn_random')) exit(0);

desc = '
Julian Reschke reported a problem in mod_dav of Apache 2 in connection
with a NULL pointer dereference.  When running in a threaded model,
especially with Apache 2, a segmentation fault can take out a whole
process and hence create a denial of service for the whole server.
For the stable distribution (woody) this problem has been fixed in
version 1.0.3-3.1.
For the unstable distribution (sid) this problem has been fixed in
version 1.0.3-10 of libapache-mod-dav and in version 2.0.51-1 of
Apache 2.
We recommend that you upgrade your mod_dav packages.


Solution : http://www.debian.org/security/2004/dsa-558
Risk factor : High';

if (description) {
 script_id(15656);
 script_version("$Revision: 1.4 $");
 script_xref(name: "DSA", value: "558");
 script_cve_id("CVE-2004-0809");

 script_description(english: desc);
 script_copyright(english: "This script is (C) 2005 Michel Arboi <mikhail@nessus.org>");
 script_name(english: "[DSA558] DSA-558-1 libapache-mod-dav");
 script_category(ACT_GATHER_INFO);
 script_family(english: "Debian Local Security Checks");
 script_dependencies("ssh_get_info.nasl");
 script_require_keys("Host/Debian/dpkg-l");
 script_summary(english: "DSA-558-1 libapache-mod-dav");
 exit(0);
}

include("debian_package.inc");

w = 0;
if (deb_check(prefix: 'libapache-mod-dav', release: '3.0', reference: '1.0.3-3.1')) {
 w ++;
 if (report_verbosity > 0) desc = strcat(desc, '\nThe package libapache-mod-dav is vulnerable in Debian 3.0.\nUpgrade to libapache-mod-dav_1.0.3-3.1\n');
}
if (deb_check(prefix: 'libapache-mod-dav', release: '3.1', reference: '1.0')) {
 w ++;
 if (report_verbosity > 0) desc = strcat(desc, '\nThe package libapache-mod-dav is vulnerable in Debian 3.1.\nUpgrade to libapache-mod-dav_1.0\n');
}
if (deb_check(prefix: 'libapache-mod-dav', release: '3.0', reference: '1.0.3-3.1')) {
 w ++;
 if (report_verbosity > 0) desc = strcat(desc, '\nThe package libapache-mod-dav is vulnerable in Debian woody.\nUpgrade to libapache-mod-dav_1.0.3-3.1\n');
}
if (w) { security_hole(port: 0, data: desc); }
