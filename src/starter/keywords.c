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

#define TOTAL_KEYWORDS 113
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 22
#define MAX_HASH_VALUE 214
/* maximum key range = 193, duplicates = 0 */

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
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215,  77,
       47, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215,   4, 215,  12, 215,   8,
       57,   4,  96,  56,  69,   4, 215,  52,   8,  57,
       64,  25,  26, 215,   4,  13,   9,  56,  17, 215,
        4,  48,   7, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215, 215, 215, 215, 215,
      215, 215, 215, 215, 215, 215
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
    {"right",             KW_RIGHT},
    {"left",              KW_LEFT},
    {"crluri",            KW_CRLURI},
    {"certuribase",       KW_CERTURIBASE},
    {"leftcert",          KW_LEFTCERT,},
    {"rightcert",         KW_RIGHTCERT},
    {"rightca",           KW_RIGHTCA},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"leftgroups",        KW_LEFTGROUPS},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"leftca",            KW_LEFTCA},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"cacert",            KW_CACERT},
    {"eap",               KW_EAP},
    {"esp",               KW_ESP},
    {"ocspuri",           KW_OCSPURI},
    {"also",              KW_ALSO},
    {"cachecrls",         KW_CACHECRLS},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"compress",          KW_COMPRESS},
    {"leftnatip",         KW_LEFTNATIP},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"rekey",             KW_REKEY},
    {"ike",               KW_IKE},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"type",              KW_TYPE},
    {"plutostart",        KW_PLUTOSTART},
    {"rightid2",          KW_RIGHTID2},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"crluri2",           KW_CRLURI2},
    {"rightca2",          KW_RIGHTCA2},
    {"leftcert2",         KW_LEFTCERT2,},
    {"rightcert2",        KW_RIGHTCERT2},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"rightid",           KW_RIGHTID},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"leftca2",           KW_LEFTCA2},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"ldapbase",          KW_LDAPBASE},
    {"xauth",             KW_XAUTH},
    {"ocspuri2",          KW_OCSPURI2},
    {"postpluto",         KW_POSTPLUTO},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"mobike",	           KW_MOBIKE},
    {"auto",              KW_AUTO},
    {"rightauth",         KW_RIGHTAUTH},
    {"disableuniqreqids", KW_DISABLEUNIQREQIDS},
    {"crluri1",           KW_CRLURI},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"ldaphost",          KW_LDAPHOST},
    {"rightnatip",        KW_RIGHTNATIP},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"hidetos",           KW_HIDETOS},
    {"prepluto",          KW_PREPLUTO},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"ocspuri1",          KW_OCSPURI},
    {"leftid2",           KW_LEFTID2},
    {"leftauth2",         KW_LEFTAUTH2},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"dumpdir",           KW_DUMPDIR},
    {"mediated_by",       KW_MEDIATED_BY},
    {"me_peerid",         KW_ME_PEERID},
    {"leftid",            KW_LEFTID},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"keyingtries",       KW_KEYINGTRIES},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"pfs",               KW_PFS},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"auth",              KW_AUTH},
    {"fragicmp",          KW_FRAGICMP},
    {"mediation",         KW_MEDIATION},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {"leftauth",          KW_LEFTAUTH},
    {"uniqueids",         KW_UNIQUEIDS},
    {"dpddelay",          KW_DPDDELAY},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"forceencaps",       KW_FORCEENCAPS},
    {"reauth",            KW_REAUTH},
    {"plutodebug",        KW_PLUTODEBUG},
    {"nocrsend",          KW_NOCRSEND},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"charonstart",       KW_CHARONSTART},
    {"keylife",           KW_KEYLIFE},
    {"dpdaction",         KW_DPDACTION},
    {"ikelifetime",       KW_IKELIFETIME},
    {"authby",            KW_AUTHBY},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"modeconfig",        KW_MODECONFIG},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"pfsgroup",          KW_PFSGROUP},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"interfaces",        KW_INTERFACES},
    {"charondebug",       KW_CHARONDEBUG},
    {"pkcs11proxy",       KW_PKCS11PROXY}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   0,  -1,  -1,   1,   2,  -1,  -1,  -1,
     -1,   3,  -1,   4,   5,   6,   7,   8,   9,  10,
     11,  12,  13,  14,  15,  16,  17,  -1,  18,  19,
     20,  -1,  21,  22,  -1,  -1,  -1,  23,  24,  25,
     26,  27,  -1,  28,  29,  30,  31,  32,  -1,  33,
     34,  35,  36,  37,  38,  39,  40,  41,  42,  43,
     44,  45,  46,  -1,  -1,  -1,  47,  48,  49,  50,
     51,  -1,  52,  53,  54,  -1,  55,  56,  57,  58,
     59,  60,  61,  -1,  -1,  62,  -1,  63,  64,  -1,
     65,  -1,  66,  67,  -1,  -1,  -1,  68,  69,  70,
     71,  -1,  72,  73,  74,  75,  -1,  -1,  76,  77,
     -1,  78,  79,  80,  -1,  -1,  81,  82,  83,  84,
     85,  86,  87,  88,  89,  90,  91,  92,  93,  94,
     -1,  -1,  95,  -1,  -1,  -1,  -1,  96,  97,  98,
     -1,  99,  -1, 100,  -1, 101,  -1, 102,  -1,  -1,
    103, 104,  -1, 105, 106,  -1,  -1,  -1,  -1,  -1,
     -1, 107, 108, 109,  -1,  -1,  -1, 110,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 111,  -1,
     -1,  -1,  -1,  -1, 112
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
