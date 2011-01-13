/* C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -m 10 -C -G -D -t  */
/* Computed positions: -k'1-2,6,$' */

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
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 126
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 20
#define MAX_HASH_VALUE 220
/* maximum key range = 201, duplicates = 0 */

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
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221,  35,
       77, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221,   8, 221,  31, 221,  20,
       28,   5,  75,  26,  88,   5, 221,  97,   5,  50,
       39,  67,  29, 221,   7,  13,   6,  89,  15, 221,
        5,  24,   7, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221, 221, 221, 221, 221,
      221, 221, 221, 221, 221, 221
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {"left",              KW_LEFT},
    {"right",             KW_RIGHT},
    {"lifetime",          KW_KEYLIFE},
    {"leftcert",          KW_LEFTCERT,},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"type",              KW_TYPE},
    {"leftgroups",        KW_LEFTGROUPS},
    {"rekey",             KW_REKEY},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"crluri",            KW_CRLURI},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"reqid",             KW_REQID},
    {"rightcert",         KW_RIGHTCERT},
    {"certuribase",       KW_CERTURIBASE},
    {"esp",               KW_ESP},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"rightid",           KW_RIGHTID},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"lifebytes",         KW_LIFEBYTES},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"plutostart",        KW_PLUTOSTART},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"lifepackets",       KW_LIFEPACKETS},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"eap",               KW_EAP},
    {"cacert",            KW_CACERT},
    {"rightca",           KW_RIGHTCA},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"leftid",            KW_LEFTID},
    {"crluri1",           KW_CRLURI},
    {"ldapbase",          KW_LDAPBASE},
    {"leftca",            KW_LEFTCA},
    {"leftnatip",         KW_LEFTNATIP},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"inactivity",        KW_INACTIVITY},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"rightnatip",        KW_RIGHTNATIP},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"cachecrls",         KW_CACHECRLS},
    {"dpddelay",          KW_DPDDELAY},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"mediated_by",       KW_MEDIATED_BY},
    {"me_peerid",         KW_ME_PEERID},
    {"plutodebug",        KW_PLUTODEBUG},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"leftcert2",         KW_LEFTCERT2,},
    {"rightid2",          KW_RIGHTID2},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"ocspuri",           KW_OCSPURI},
    {"also",              KW_ALSO},
    {"mediation",         KW_MEDIATION},
    {"ike",               KW_IKE},
    {"dpdaction",         KW_DPDACTION},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"compress",          KW_COMPRESS},
    {"ldaphost",          KW_LDAPHOST},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"crluri2",           KW_CRLURI2},
    {"rightca2",          KW_RIGHTCA2},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"rightcert2",        KW_RIGHTCERT2},
    {"pfs",               KW_PFS},
    {"leftid2",           KW_LEFTID2},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"leftca2",           KW_LEFTCA2},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"xauth",             KW_XAUTH},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"mark_in",           KW_MARK_IN},
    {"mobike",	           KW_MOBIKE},
    {"margintime",        KW_REKEYMARGIN},
    {"dumpdir",           KW_DUMPDIR},
    {"ocspuri1",          KW_OCSPURI},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"fragicmp",          KW_FRAGICMP},
    {"rightauth",         KW_RIGHTAUTH},
    {"interfaces",        KW_INTERFACES},
    {"marginbytes",       KW_MARGINBYTES},
    {"marginpackets",     KW_MARGINPACKETS},
    {"nocrsend",          KW_NOCRSEND},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"keyingtries",       KW_KEYINGTRIES},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"uniqueids",         KW_UNIQUEIDS},
    {"mark_out",          KW_MARK_OUT},
    {"charonstart",       KW_CHARONSTART},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {"forceencaps",       KW_FORCEENCAPS},
    {"authby",            KW_AUTHBY},
    {"postpluto",         KW_POSTPLUTO},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"ocspuri2",          KW_OCSPURI2},
    {"hidetos",           KW_HIDETOS},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"mark",              KW_MARK},
    {"charondebug",       KW_CHARONDEBUG},
    {"leftauth2",         KW_LEFTAUTH2},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"keylife",           KW_KEYLIFE},
    {"auto",              KW_AUTO},
    {"ikelifetime",       KW_IKELIFETIME},
    {"reauth",            KW_REAUTH},
    {"leftauth",          KW_LEFTAUTH},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {"prepluto",          KW_PREPLUTO},
    {"pfsgroup",          KW_PFSGROUP},
    {"auth",              KW_AUTH},
    {"modeconfig",        KW_MODECONFIG}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      0,  -1,  -1,   1,  -1,  -1,  -1,  -1,   2,   3,
     -1,  -1,   4,   5,  -1,   6,   7,  -1,  -1,   8,
      9,  10,  11,  12,  13,  14,  -1,  15,  16,  -1,
     17,  18,  19,  20,  -1,  21,  22,  23,  -1,  -1,
     24,  25,  26,  27,  28,  29,  -1,  30,  31,  32,
     33,  34,  35,  -1,  36,  -1,  -1,  37,  38,  39,
     40,  41,  42,  43,  -1,  44,  45,  46,  47,  -1,
     48,  -1,  49,  50,  51,  52,  53,  54,  55,  -1,
     56,  57,  58,  59,  60,  61,  62,  63,  -1,  64,
     65,  66,  67,  68,  69,  70,  71,  72,  73,  74,
     75,  -1,  76,  77,  78,  79,  -1,  -1,  80,  81,
     82,  -1,  83,  84,  -1,  85,  86,  87,  88,  89,
     90,  -1,  91,  -1,  92,  -1,  93,  94,  95,  -1,
     -1,  96,  97,  -1,  98,  99,  -1,  -1,  -1,  -1,
     -1,  -1, 100,  -1, 101,  -1, 102,  -1,  -1,  -1,
    103, 104,  -1,  -1, 105,  -1,  -1, 106, 107, 108,
    109, 110, 111,  -1, 112, 113,  -1, 114, 115, 116,
     -1, 117,  -1, 118, 119, 120, 121,  -1,  -1,  -1,
    122,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 123,  -1,
     -1,  -1, 124,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    125
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
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
