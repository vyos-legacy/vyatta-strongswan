/* C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -C -G -t  */
/* Computed positions: -k'1-2,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


/* strongSwan keywords
 * Copyright (C) 2005 Andreas Steffen
 * Hochschule fuer Technik Rapperswil, Switzerland
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
 *
 * RCSID $Id: keywords.txt 4612 2008-11-11 06:37:37Z andreas $
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 102
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 248
/* maximum key range = 243, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned char asso_values[] =
    {
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249,  25,
       10, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 110, 249,   0,
      100,   5,  75,  65,  90,   0, 249,  60,  10,  15,
       80,  60,  15, 249,   0,  50,  35,  15,  30, 249,
        0,  75,   0, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249, 249, 249, 249, 249,
      249, 249, 249, 249, 249, 249
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]] + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""},
    {"crluri",            KW_CRLURI},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {""}, {""},
    {"crluri2",           KW_CRLURI2},
    {""}, {""}, {""},
    {"certuribase",       KW_CERTURIBASE},
    {""},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {""},
    {"rightnatip",        KW_RIGHTNATIP},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {""}, {""}, {""},
    {"crluri1",           KW_CRLURI},
    {""}, {""}, {""}, {""},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {""},
    {"leftnatip",         KW_LEFTNATIP},
    {"right",             KW_RIGHT},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {""},
    {"rightcert",         KW_RIGHTCERT},
    {""},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {""},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {""}, {""}, {""},
    {"left",              KW_LEFT},
    {""}, {""}, {""},
    {"leftcert",          KW_LEFTCERT,},
    {""},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {""},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {""},
    {"ocspuri",           KW_OCSPURI},
    {"ike",               KW_IKE},
    {""},
    {"plutostart",        KW_PLUTOSTART},
    {""}, {""},
    {"esp",               KW_ESP},
    {""},
    {"leftgroups",        KW_LEFTGROUPS},
    {"ikelifetime",       KW_IKELIFETIME},
    {"keylife",           KW_KEYLIFE},
    {"ocspuri2",          KW_OCSPURI2},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"keyexchange",       KW_KEYEXCHANGE},
    {""},
    {"prepluto",          KW_PREPLUTO},
    {""},
    {"rekey",             KW_REKEY},
    {"mobike",	           KW_MOBIKE},
    {""},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {""},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"ocspuri1",          KW_OCSPURI},
    {""},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"fragicmp",          KW_FRAGICMP},
    {""},
    {"plutodebug",        KW_PLUTODEBUG},
    {"reauth",            KW_REAUTH},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"mediated_by",       KW_MEDIATED_BY},
    {"rightid",           KW_RIGHTID},
    {""},
    {"mediation",         KW_MEDIATION},
    {""},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {""},
    {"pfsgroup",          KW_PFSGROUP},
    {""}, {""},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"rightca",           KW_RIGHTCA},
    {"compress",          KW_COMPRESS},
    {"type",              KW_TYPE},
    {""},
    {"leftid",            KW_LEFTID},
    {"dumpdir",           KW_DUMPDIR},
    {"ldapbase",          KW_LDAPBASE},
    {""}, {""},
    {"keyingtries",       KW_KEYINGTRIES},
    {""}, {""},
    {"me_peerid",         KW_ME_PEERID},
    {""},
    {"leftca",            KW_LEFTCA},
    {""},
    {"eap",               KW_EAP},
    {""}, {""},
    {"charonstart",       KW_CHARONSTART},
    {""}, {""},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"interfaces",        KW_INTERFACES},
    {""}, {""},
    {"pfs",               KW_PFS},
    {"postpluto",         KW_POSTPLUTO},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {""},
    {"hidetos",           KW_HIDETOS},
    {""}, {""},
    {"modeconfig",        KW_MODECONFIG},
    {"cacert",            KW_CACERT},
    {""},
    {"ldaphost",          KW_LDAPHOST},
    {"uniqueids",         KW_UNIQUEIDS},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {""}, {""}, {""}, {""},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {""}, {""}, {""}, {""},
    {"charondebug",       KW_CHARONDEBUG},
    {""},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"cachecrls",         KW_CACHECRLS},
    {""}, {""}, {""},
    {"packetdefault",     KW_PACKETDEFAULT},
    {""},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"also",              KW_ALSO},
    {""}, {""}, {""}, {""},
    {"auto",              KW_AUTO},
    {""}, {""}, {""}, {""}, {""}, {""},
    {"forceencaps",       KW_FORCEENCAPS},
    {""},
    {"dpddelay",          KW_DPDDELAY},
    {""}, {""}, {""},
    {"eap_identity",      KW_EAP_IDENTITY},
    {""},
    {"dpdaction",         KW_DPDACTION},
    {"xauth",             KW_XAUTH},
    {"authby",            KW_AUTHBY},
    {""}, {""}, {""}, {""}, {""}, {""},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {""}, {""}, {""}, {""}, {""},
    {"auth",              KW_AUTH},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
    {"nocrsend",          KW_NOCRSEND}
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct kw_entry *
in_word_set (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
