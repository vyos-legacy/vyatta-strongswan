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

#define TOTAL_KEYWORDS 112
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 13
#define MAX_HASH_VALUE 200
/* maximum key range = 188, duplicates = 0 */

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
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201,   3,
       42, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201,   1, 201,   9, 201,   5,
       39,   1,  64,  47,  62,   1, 201,  88,   5,  83,
       39,  30,  21, 201,   1,  10,   6,  44,  14, 201,
        4,  54,   4, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201, 201, 201, 201, 201,
      201, 201, 201, 201, 201, 201
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
    {"crluri",            KW_CRLURI},
    {"left",              KW_LEFT},
    {"crluri1",           KW_CRLURI},
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
    {"cachecrls",         KW_CACHECRLS},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"ocspuri",           KW_OCSPURI},
    {"leftnatip",         KW_LEFTNATIP},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"ocspuri1",          KW_OCSPURI},
    {"also",              KW_ALSO},
    {"rightid",           KW_RIGHTID},
    {"plutostart",        KW_PLUTOSTART},
    {"rightid2",          KW_RIGHTID2},
    {"compress",          KW_COMPRESS},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"crluri2",           KW_CRLURI2},
    {"rightca2",          KW_RIGHTCA2},
    {"leftcert2",         KW_LEFTCERT2,},
    {"rightcert2",        KW_RIGHTCERT2},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"rekey",             KW_REKEY},
    {"ldapbase",          KW_LDAPBASE},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"leftca2",           KW_LEFTCA2},
    {"type",              KW_TYPE},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"rightnatip",        KW_RIGHTNATIP},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"xauth",             KW_XAUTH},
    {"rightauth",         KW_RIGHTAUTH},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"ocspuri2",          KW_OCSPURI2},
    {"auto",              KW_AUTO},
    {"ldaphost",          KW_LDAPHOST},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"leftid",            KW_LEFTID},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"dumpdir",           KW_DUMPDIR},
    {"ike",               KW_IKE},
    {"leftid2",           KW_LEFTID2},
    {"postpluto",         KW_POSTPLUTO},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"pfs",               KW_PFS},
    {"fragicmp",          KW_FRAGICMP},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"leftauth2",         KW_LEFTAUTH2},
    {"uniqueids",         KW_UNIQUEIDS},
    {"prepluto",          KW_PREPLUTO},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"hidetos",           KW_HIDETOS},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"dpdaction",         KW_DPDACTION},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"forceencaps",       KW_FORCEENCAPS},
    {"nocrsend",          KW_NOCRSEND},
    {"auth",              KW_AUTH},
    {"leftauth",          KW_LEFTAUTH},
    {"mobike",	           KW_MOBIKE},
    {"plutodebug",        KW_PLUTODEBUG},
    {"charonstart",       KW_CHARONSTART},
    {"interfaces",        KW_INTERFACES},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"dpddelay",          KW_DPDDELAY},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"reauth",            KW_REAUTH},
    {"me_peerid",         KW_ME_PEERID},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"mediation",         KW_MEDIATION},
    {"pfsgroup",          KW_PFSGROUP},
    {"mediated_by",       KW_MEDIATED_BY},
    {"keyingtries",       KW_KEYINGTRIES},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"keylife",           KW_KEYLIFE},
    {"charondebug",       KW_CHARONDEBUG},
    {"ikelifetime",       KW_IKELIFETIME},
    {"authby",            KW_AUTHBY},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"modeconfig",        KW_MODECONFIG}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,   0,   1,  -1,   2,   3,  -1,   4,
     -1,   5,   6,   7,   8,   9,  10,  11,  12,  13,
     14,  15,  16,  -1,  17,  18,  -1,  -1,  19,  20,
     21,  -1,  -1,  22,  23,  24,  25,  26,  27,  28,
     -1,  -1,  29,  30,  31,  32,  33,  34,  35,  36,
     37,  38,  39,  40,  41,  42,  43,  44,  45,  46,
     47,  48,  49,  -1,  50,  -1,  51,  52,  53,  54,
     55,  -1,  56,  57,  58,  -1,  59,  60,  61,  62,
     63,  64,  65,  66,  67,  68,  69,  70,  71,  72,
     73,  74,  -1,  75,  76,  77,  78,  -1,  -1,  79,
     80,  81,  82,  -1,  83,  84,  85,  86,  -1,  87,
     88,  89,  90,  91,  92,  93,  -1,  94,  95,  -1,
     -1,  -1,  96,  97,  -1,  98,  99,  -1, 100,  -1,
     -1,  -1,  -1,  -1, 101,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 102,  -1, 103,  -1, 104,
     -1, 105,  -1,  -1, 106, 107,  -1, 108,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 109,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 110,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    111
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
