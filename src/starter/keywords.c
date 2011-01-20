/* C code produced by gperf version 3.0.3 */
/* Command-line: gperf -m 10 -C -G -D -t  */
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

#define TOTAL_KEYWORDS 127
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 8
#define MAX_HASH_VALUE 282
/* maximum key range = 275, duplicates = 0 */

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
  static const unsigned short asso_values[] =
    {
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283,  23,
       72, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283,   5, 283,  24, 283,  88,
       40,   0,  96,  41,  96,   0, 283,  99,   0,   7,
       46,  35,  13, 283,   2,  10,   6,  77,   4, 283,
        0,  18,   0, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283, 283, 283, 283, 283,
      283, 283, 283, 283, 283, 283
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
    {"lifetime",          KW_KEYLIFE},
    {"left",              KW_LEFT},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"right",             KW_RIGHT},
    {"leftcert",          KW_LEFTCERT,},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"leftgroups",        KW_LEFTGROUPS},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"rekey",             KW_REKEY},
    {"esp",               KW_ESP},
    {"type",              KW_TYPE},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"lifebytes",         KW_LIFEBYTES},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"plutostart",        KW_PLUTOSTART},
    {"eap",               KW_EAP},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"mediated_by",       KW_MEDIATED_BY},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"lifepackets",       KW_LIFEPACKETS},
    {"leftnatip",         KW_LEFTNATIP},
    {"reqid",             KW_REQID},
    {"mobike",	           KW_MOBIKE},
    {"rightid",           KW_RIGHTID},
    {"leftca",            KW_LEFTCA},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"me_peerid",         KW_ME_PEERID},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"also",              KW_ALSO},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"disableuniqreqids", KW_DISABLEUNIQREQIDS},
    {"mediation",         KW_MEDIATION},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"rightnatip",        KW_RIGHTNATIP},
    {"ldapbase",          KW_LDAPBASE},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"inactivity",        KW_INACTIVITY},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"dpddelay",          KW_DPDDELAY},
    {"mark_out",          KW_MARK_OUT},
    {"leftcert2",         KW_LEFTCERT2,},
    {"rightid2",          KW_RIGHTID2},
    {"mark_in",           KW_MARK_IN},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"leftid",            KW_LEFTID},
    {"margintime",        KW_REKEYMARGIN},
    {"ldaphost",          KW_LDAPHOST},
    {"postpluto",         KW_POSTPLUTO},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"crluri",            KW_CRLURI},
    {"marginbytes",       KW_MARGINBYTES},
    {"marginpackets",     KW_MARGINPACKETS},
    {"certuribase",       KW_CERTURIBASE},
    {"ike",               KW_IKE},
    {"leftca2",           KW_LEFTCA2},
    {"plutodebug",        KW_PLUTODEBUG},
    {"rightcert",         KW_RIGHTCERT},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"dpdaction",         KW_DPDACTION},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"leftid2",           KW_LEFTID2},
    {"crluri1",           KW_CRLURI},
    {"rightca",           KW_RIGHTCA},
    {"pfs",               KW_PFS},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"xauth",             KW_XAUTH},
    {"dumpdir",           KW_DUMPDIR},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"modeconfig",        KW_MODECONFIG},
    {"nocrsend",          KW_NOCRSEND},
    {"cacert",            KW_CACERT},
    {"rightauth",         KW_RIGHTAUTH},
    {"ocspuri",           KW_OCSPURI},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"mark",              KW_MARK},
    {"prepluto",          KW_PREPLUTO},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"auto",              KW_AUTO},
    {"compress",          KW_COMPRESS},
    {"uniqueids",         KW_UNIQUEIDS},
    {"authby",            KW_AUTHBY},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"hidetos",           KW_HIDETOS},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {"forceencaps",       KW_FORCEENCAPS},
    {"ocspuri1",          KW_OCSPURI},
    {"leftauth2",         KW_LEFTAUTH2},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"keyingtries",       KW_KEYINGTRIES},
    {"interfaces",        KW_INTERFACES},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {"pfsgroup",          KW_PFSGROUP},
    {"crluri2",           KW_CRLURI2},
    {"rightca2",          KW_RIGHTCA2},
    {"rightcert2",        KW_RIGHTCERT2},
    {"leftauth",          KW_LEFTAUTH},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"reauth",            KW_REAUTH},
    {"auth",              KW_AUTH},
    {"keylife",           KW_KEYLIFE},
    {"ocspuri2",          KW_OCSPURI2},
    {"ikelifetime",       KW_IKELIFETIME},
    {"fragicmp",          KW_FRAGICMP},
    {"cachecrls",         KW_CACHECRLS},
    {"charonstart",       KW_CHARONSTART},
    {"charondebug",       KW_CHARONDEBUG}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,  -1,
      1,  -1,   2,   3,   4,  -1,  -1,  -1,   5,  -1,
      6,   7,   8,  -1,   9,  10,  11,  -1,  12,  13,
     14,  15,  -1,  -1,  -1,  16,  17,  18,  19,  20,
     21,  22,  23,  24,  -1,  25,  26,  27,  28,  29,
     -1,  -1,  -1,  -1,  30,  31,  32,  33,  -1,  34,
     35,  36,  37,  38,  39,  -1,  40,  41,  42,  43,
     -1,  44,  45,  46,  47,  48,  49,  50,  51,  52,
     53,  54,  55,  -1,  56,  57,  58,  59,  -1,  60,
     -1,  -1,  61,  62,  63,  -1,  64,  -1,  65,  -1,
     66,  67,  68,  69,  70,  71,  72,  73,  74,  -1,
     -1,  75,  -1,  -1,  76,  -1,  77,  -1,  -1,  78,
     79,  80,  81,  82,  -1,  83,  84,  85,  86,  87,
     88,  89,  90,  91,  92,  93,  94,  -1,  -1,  95,
     96,  97,  98,  99,  -1,  -1,  -1, 100, 101,  -1,
    102, 103, 104,  -1,  -1,  -1, 105,  -1, 106, 107,
     -1, 108, 109,  -1, 110, 111,  -1,  -1,  -1, 112,
    113,  -1, 114,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 115,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    116,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 117,  -1,
    118, 119, 120,  -1,  -1, 121, 122, 123,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 124,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 125,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 126
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
