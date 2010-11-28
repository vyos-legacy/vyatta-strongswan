/* C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -m 10 -C -G -D -t  */
/* Computed positions: -k'2-3,6,$' */

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

#define TOTAL_KEYWORDS 127
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 12
#define MAX_HASH_VALUE 238
/* maximum key range = 227, duplicates = 0 */

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
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239,   2,
      104, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239,  15, 239,  20,  14,  58,
       51,   1,   7,   1,  81,   1, 239, 132,  47,   4,
        1,  49,  10,   9,  23,   1,  20,  48,   4, 239,
      239,  35,   1, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239, 239, 239, 239, 239,
      239, 239, 239, 239, 239, 239
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
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {"pfs",               KW_PFS},
    {"uniqueids",         KW_UNIQUEIDS},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"lifetime",          KW_KEYLIFE},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"rightnatip",        KW_RIGHTNATIP},
    {"esp",               KW_ESP},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"right",             KW_RIGHT},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"left",              KW_LEFT},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"leftcert",          KW_LEFTCERT,},
    {"interfaces",        KW_INTERFACES},
    {"lifepackets",       KW_LIFEPACKETS},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"leftgroups",        KW_LEFTGROUPS},
    {"eap",               KW_EAP},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"leftnatip",         KW_LEFTNATIP},
    {"keyingtries",       KW_KEYINGTRIES},
    {"type",              KW_TYPE},
    {"keylife",           KW_KEYLIFE},
    {"mark_in",           KW_MARK_IN},
    {"lifebytes",         KW_LIFEBYTES},
    {"leftca",            KW_LEFTCA},
    {"margintime",        KW_REKEYMARGIN},
    {"marginbytes",       KW_MARGINBYTES},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"marginpackets",     KW_MARGINPACKETS},
    {"certuribase",       KW_CERTURIBASE},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"rightid",           KW_RIGHTID},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"compress",          KW_COMPRESS},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"reqid",             KW_REQID},
    {"inactivity",        KW_INACTIVITY},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"mobike",	           KW_MOBIKE},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"pfsgroup",          KW_PFSGROUP},
    {"me_peerid",         KW_ME_PEERID},
    {"crluri",            KW_CRLURI},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"crluri1",           KW_CRLURI},
    {"mediation",         KW_MEDIATION},
    {"dumpdir",           KW_DUMPDIR},
    {"forceencaps",       KW_FORCEENCAPS},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"rightca",           KW_RIGHTCA},
    {"rightcert",         KW_RIGHTCERT},
    {"ocspuri",           KW_OCSPURI},
    {"dpdaction",         KW_DPDACTION},
    {"ocspuri1",          KW_OCSPURI},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"ldapbase",          KW_LDAPBASE},
    {"also",              KW_ALSO},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"hidetos",           KW_HIDETOS},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"rightauth",         KW_RIGHTAUTH},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"charondebug",       KW_CHARONDEBUG},
    {"rightid2",          KW_RIGHTID2},
    {"leftid",            KW_LEFTID},
    {"mediated_by",       KW_MEDIATED_BY},
    {"fragicmp",          KW_FRAGICMP},
    {"mark_out",          KW_MARK_OUT},
    {"auto",              KW_AUTO},
    {"leftcert2",         KW_LEFTCERT2,},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"cacert",            KW_CACERT},
    {"plutostart",        KW_PLUTOSTART},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"prepluto",          KW_PREPLUTO},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"charonstart",       KW_CHARONSTART},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"ike",               KW_IKE},
    {"aaa_identity",      KW_AAA_IDENTITY},
    {"leftca2",           KW_LEFTCA2},
    {"authby",            KW_AUTHBY},
    {"leftauth",          KW_LEFTAUTH},
    {"cachecrls",         KW_CACHECRLS},
    {"ldaphost",          KW_LDAPHOST},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"dpddelay",          KW_DPDDELAY},
    {"ikelifetime",       KW_IKELIFETIME},
    {"auth",              KW_AUTH},
    {"xauth",             KW_XAUTH},
    {"postpluto",         KW_POSTPLUTO},
    {"plutodebug",        KW_PLUTODEBUG},
    {"modeconfig",        KW_MODECONFIG},
    {"nocrsend",          KW_NOCRSEND},
    {"leftauth2",         KW_LEFTAUTH2},
    {"leftid2",           KW_LEFTID2},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"rightca2",          KW_RIGHTCA2},
    {"rekey",             KW_REKEY},
    {"rightcert2",        KW_RIGHTCERT2},
    {"mark",              KW_MARK},
    {"crluri2",           KW_CRLURI2},
    {"reauth",            KW_REAUTH},
    {"ocspuri2",          KW_OCSPURI2},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"pkcs11proxy",       KW_PKCS11PROXY}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   0,   1,  -1,   2,  -1,  -1,   3,  -1,
     -1,   4,  -1,   5,   6,   7,   8,   9,  -1,  10,
     11,  -1,  12,  13,  14,  15,  16,  17,  -1,  18,
     19,  20,  21,  22,  -1,  -1,  23,  24,  -1,  25,
     26,  27,  28,  29,  30,  31,  32,  33,  34,  35,
     36,  37,  38,  39,  40,  41,  42,  43,  44,  45,
     46,  47,  48,  49,  50,  51,  -1,  52,  53,  54,
     55,  -1,  56,  57,  -1,  58,  59,  60,  -1,  61,
     62,  63,  64,  -1,  -1,  65,  -1,  66,  -1,  67,
     68,  69,  70,  71,  -1,  -1,  72,  -1,  -1,  73,
     74,  75,  76,  77,  78,  79,  80,  -1,  81,  82,
     83,  84,  85,  86,  87,  -1,  88,  -1,  89,  90,
     -1,  91,  92,  93,  94,  -1,  95,  96,  97,  98,
     -1,  -1,  -1,  -1,  99, 100, 101,  -1, 102, 103,
    104, 105, 106, 107, 108, 109,  -1, 110,  -1,  -1,
    111,  -1,  -1,  -1,  -1,  -1,  -1, 112,  -1, 113,
    114, 115, 116, 117, 118,  -1,  -1,  -1,  -1, 119,
     -1,  -1, 120,  -1,  -1,  -1,  -1,  -1,  -1, 121,
     -1,  -1,  -1,  -1, 122,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 123,  -1, 124, 125,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 126
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
