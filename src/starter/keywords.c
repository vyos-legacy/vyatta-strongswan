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

#define TOTAL_KEYWORDS 119
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 17
#define MAX_HASH_VALUE 215
/* maximum key range = 199, duplicates = 0 */

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
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216,  12,
       78, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216,   4, 216,  20, 216,  45,
       55,   4,  77,  14,  78,   4, 216, 119,   4,  89,
       46,  34,  29, 216,   6,  12,   5,  56,  34, 216,
        4,  20,   5, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216, 216, 216, 216, 216,
      216, 216, 216, 216, 216, 216
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
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"type",              KW_TYPE},
    {"rekey",             KW_REKEY},
    {"leftgroups",        KW_LEFTGROUPS},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"esp",               KW_ESP},
    {"lifebytes",         KW_LIFEBYTES},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"lifepackets",       KW_LIFEPACKETS},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"leftca",            KW_LEFTCA},
    {"eap",               KW_EAP},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"plutostart",        KW_PLUTOSTART},
    {"also",              KW_ALSO},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"crluri",            KW_CRLURI},
    {"leftnatip",         KW_LEFTNATIP},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"rightcert",         KW_RIGHTCERT},
    {"certuribase",       KW_CERTURIBASE},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {"crluri1",           KW_CRLURI},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"rightid",           KW_RIGHTID},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"cacert",            KW_CACERT},
    {"rightca",           KW_RIGHTCA},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"inactivity",        KW_INACTIVITY},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"ldapbase",          KW_LDAPBASE},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"rightnatip",        KW_RIGHTNATIP},
    {"ocspuri",           KW_OCSPURI},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"leftcert2",         KW_LEFTCERT2,},
    {"rightid2",          KW_RIGHTID2},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"compress",          KW_COMPRESS},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"ocspuri1",          KW_OCSPURI},
    {"ldaphost",          KW_LDAPHOST},
    {"xauth",             KW_XAUTH},
    {"postpluto",         KW_POSTPLUTO},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"plutodebug",        KW_PLUTODEBUG},
    {"leftca2",           KW_LEFTCA2},
    {"auto",              KW_AUTO},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"dpddelay",          KW_DPDDELAY},
    {"rightauth",         KW_RIGHTAUTH},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"pfs",               KW_PFS},
    {"authby",            KW_AUTHBY},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"leftid",            KW_LEFTID},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"uniqueids",         KW_UNIQUEIDS},
    {"dumpdir",           KW_DUMPDIR},
    {"mediated_by",       KW_MEDIATED_BY},
    {"ike",               KW_IKE},
    {"cachecrls",         KW_CACHECRLS},
    {"prepluto",          KW_PREPLUTO},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {"hidetos",           KW_HIDETOS},
    {"mobike",	           KW_MOBIKE},
    {"forceencaps",       KW_FORCEENCAPS},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"crluri2",           KW_CRLURI2},
    {"rightca2",          KW_RIGHTCA2},
    {"rightcert2",        KW_RIGHTCERT2},
    {"dpdaction",         KW_DPDACTION},
    {"nocrsend",          KW_NOCRSEND},
    {"leftid2",           KW_LEFTID2},
    {"interfaces",        KW_INTERFACES},
    {"leftauth",          KW_LEFTAUTH},
    {"leftauth2",         KW_LEFTAUTH2},
    {"mediation",         KW_MEDIATION},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"auth",              KW_AUTH},
    {"keyingtries",       KW_KEYINGTRIES},
    {"me_peerid",         KW_ME_PEERID},
    {"fragicmp",          KW_FRAGICMP},
    {"margintime",        KW_REKEYMARGIN},
    {"ocspuri2",          KW_OCSPURI2},
    {"reauth",            KW_REAUTH},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"pfsgroup",          KW_PFSGROUP},
    {"marginbytes",       KW_MARGINBYTES},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"marginpackets",     KW_MARGINPACKETS},
    {"modeconfig",        KW_MODECONFIG},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"charonstart",       KW_CHARONSTART},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {"charondebug",       KW_CHARONDEBUG},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"keylife",           KW_KEYLIFE},
    {"ikelifetime",       KW_IKELIFETIME}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,  -1,  -1,
      1,  -1,  -1,  -1,   2,   3,  -1,  -1,   4,   5,
     -1,  -1,   6,   7,  -1,   8,   9,  -1,  10,  -1,
     11,  -1,  -1,  -1,  12,  -1,  -1,  13,  14,  15,
     16,  17,  18,  19,  20,  -1,  21,  22,  23,  -1,
     24,  -1,  25,  26,  27,  28,  29,  -1,  30,  31,
     32,  -1,  33,  34,  35,  36,  37,  38,  -1,  39,
     -1,  40,  41,  42,  43,  44,  -1,  45,  -1,  46,
     -1,  47,  -1,  48,  -1,  49,  50,  51,  -1,  52,
     53,  54,  -1,  55,  56,  57,  58,  59,  -1,  -1,
     60,  61,  62,  63,  64,  65,  66,  67,  68,  -1,
     -1,  69,  70,  71,  72,  -1,  73,  74,  75,  76,
     77,  78,  -1,  79,  80,  81,  -1,  82,  83,  84,
     85,  86,  -1,  87,  88,  -1,  -1,  89,  90,  91,
     92,  93,  -1,  94,  -1,  -1,  95,  96,  97,  -1,
     98,  99,  -1,  -1,  -1, 100,  -1,  -1,  -1, 101,
     -1, 102, 103,  -1,  -1,  -1, 104, 105, 106, 107,
    108, 109,  -1, 110,  -1, 111, 112,  -1, 113,  -1,
     -1, 114,  -1,  -1, 115,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 116,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 117,  -1,  -1,  -1, 118
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
