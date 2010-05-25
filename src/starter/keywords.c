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

#define TOTAL_KEYWORDS 121
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 11
#define MAX_HASH_VALUE 230
/* maximum key range = 220, duplicates = 0 */

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
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231,  26,
       75, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231,   2, 231,  25, 231,  40,
       61,   2, 114,  24,   3,   2, 231, 101,   2,  96,
       48,  35,  23, 231,   4,  10,   3,  69,  25, 231,
        2,  18,  16, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231, 231, 231, 231, 231,
      231, 231, 231, 231, 231, 231
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
    {"reauth",            KW_REAUTH},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"type",              KW_TYPE},
    {"leftgroups",        KW_LEFTGROUPS},
    {"rekey",             KW_REKEY},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"xauth",             KW_XAUTH},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"esp",               KW_ESP},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"lifebytes",         KW_LIFEBYTES},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"rightauth",         KW_RIGHTAUTH},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"plutostart",        KW_PLUTOSTART},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"lifepackets",       KW_LIFEPACKETS},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"eap",               KW_EAP},
    {"crluri",            KW_CRLURI},
    {"hidetos",           KW_HIDETOS},
    {"rightcert",         KW_RIGHTCERT},
    {"certuribase",       KW_CERTURIBASE},
    {"leftca",            KW_LEFTCA},
    {"leftnatip",         KW_LEFTNATIP},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"also",              KW_ALSO},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"rightid",           KW_RIGHTID},
    {"cacert",            KW_CACERT},
    {"rightca",           KW_RIGHTCA},
    {"crluri1",           KW_CRLURI},
    {"inactivity",        KW_INACTIVITY},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"leftauth",          KW_LEFTAUTH},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"rightnatip",        KW_RIGHTNATIP},
    {"ocspuri",           KW_OCSPURI},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"leftcert2",         KW_LEFTCERT2,},
    {"rightid2",          KW_RIGHTID2},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"compress",          KW_COMPRESS},
    {"ldapbase",          KW_LDAPBASE},
    {"auth",              KW_AUTH},
    {"postpluto",         KW_POSTPLUTO},
    {"charonstart",       KW_CHARONSTART},
    {"ike",               KW_IKE},
    {"ldaphost",          KW_LDAPHOST},
    {"leftca2",           KW_LEFTCA2},
    {"dpddelay",          KW_DPDDELAY},
    {"ocspuri1",          KW_OCSPURI},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"plutodebug",        KW_PLUTODEBUG},
    {"cachecrls",         KW_CACHECRLS},
    {"charondebug",       KW_CHARONDEBUG},
    {"crluri2",           KW_CRLURI2},
    {"rightca2",          KW_RIGHTCA2},
    {"mediated_by",       KW_MEDIATED_BY},
    {"rightcert2",        KW_RIGHTCERT2},
    {"leftid",            KW_LEFTID},
    {"auto",              KW_AUTO},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"authby",            KW_AUTHBY},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"uniqueids",         KW_UNIQUEIDS},
    {"prepluto",          KW_PREPLUTO},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"mobike",	           KW_MOBIKE},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"dumpdir",           KW_DUMPDIR},
    {"dpdaction",         KW_DPDACTION},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"leftid2",           KW_LEFTID2},
    {"keyingtries",       KW_KEYINGTRIES},
    {"pfs",               KW_PFS},
    {"nocrsend",          KW_NOCRSEND},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"leftauth2",         KW_LEFTAUTH2},
    {"mediation",         KW_MEDIATION},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"ocspuri2",          KW_OCSPURI2},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {"me_peerid",         KW_ME_PEERID},
    {"forceencaps",       KW_FORCEENCAPS},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {"margintime",        KW_REKEYMARGIN},
    {"interfaces",        KW_INTERFACES},
    {"fragicmp",          KW_FRAGICMP},
    {"marginbytes",       KW_MARGINBYTES},
    {"marginpackets",     KW_MARGINPACKETS},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"modeconfig",        KW_MODECONFIG},
    {"pfsgroup",          KW_PFSGROUP},
    {"keylife",           KW_KEYLIFE},
    {"ikelifetime",       KW_IKELIFETIME}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,   0,  -1,  -1,   1,  -1,   2,   3,   4,  -1,
      5,   6,  -1,   7,   8,  -1,  -1,   9,  10,  11,
     12,  -1,  13,  -1,  14,  15,  16,  -1,  17,  -1,
     18,  19,  20,  21,  -1,  22,  23,  -1,  24,  25,
     26,  27,  28,  29,  30,  -1,  -1,  31,  32,  33,
     34,  35,  36,  37,  38,  -1,  39,  40,  -1,  41,
     -1,  -1,  -1,  42,  43,  -1,  44,  45,  46,  47,
     48,  49,  -1,  50,  51,  52,  53,  54,  55,  56,
     57,  58,  59,  -1,  -1,  60,  -1,  -1,  61,  -1,
     -1,  62,  -1,  -1,  63,  64,  -1,  -1,  65,  66,
     -1,  67,  68,  69,  -1,  -1,  70,  -1,  71,  72,
     73,  -1,  -1,  -1,  74,  -1,  75,  -1,  76,  77,
     78,  79,  80,  81,  82,  83,  84,  85,  86,  87,
     88,  89,  90,  91,  92,  93,  -1,  94,  95,  -1,
     96,  -1,  -1,  -1,  97,  -1,  98,  99, 100,  -1,
     -1, 101, 102,  -1, 103,  -1,  -1, 104, 105,  -1,
    106,  -1, 107,  -1, 108,  -1,  -1,  -1,  -1, 109,
     -1, 110,  -1,  -1, 111,  -1,  -1,  -1,  -1, 112,
    113,  -1, 114, 115,  -1,  -1,  -1,  -1, 116,  -1,
    117,  -1,  -1, 118,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 119,  -1,  -1,  -1,
    120
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
