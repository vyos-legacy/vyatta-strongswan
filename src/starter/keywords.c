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
 * RCSID $Id: keywords.txt 3928 2008-05-11 07:59:00Z andreas $
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 100
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 263
/* maximum key range = 258, duplicates = 0 */

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
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264,  10,
        0, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264,  15, 264,   0,
      100,   5,  90,  85,  60,   0, 264,  60,  10,  55,
       80,  75,  15, 264,   0,  50,  35,   5,  25, 264,
       10,  75,   0, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264, 264, 264, 264, 264,
      264, 264, 264, 264, 264, 264
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]] + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""},
    {"crluri",            KW_CRLURI},
    {"crluri2",           KW_CRLURI2},
    {""}, {""}, {""}, {""}, {""}, {""},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {""}, {""},
    {"crluri1",           KW_CRLURI},
    {""}, {""}, {""},
    {"certuribase",       KW_CERTURIBASE},
    {"rightca",           KW_RIGHTCA},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {""},
    {"rightnatip",        KW_RIGHTNATIP},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"leftca",            KW_LEFTCA},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"eap",               KW_EAP},
    {"leftnatip",         KW_LEFTNATIP},
    {"right",             KW_RIGHT},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {""},
    {"rightcert",         KW_RIGHTCERT},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {""},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {""}, {""}, {""}, {""},
    {"left",              KW_LEFT},
    {""},
    {"cacert",            KW_CACERT},
    {""},
    {"leftcert",          KW_LEFTCERT,},
    {""},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {""},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {""}, {""},
    {"ike",               KW_IKE},
    {""},
    {"plutostart",        KW_PLUTOSTART},
    {"reauth",            KW_REAUTH},
    {""},
    {"esp",               KW_ESP},
    {"cachecrls",         KW_CACHECRLS},
    {"leftgroups",        KW_LEFTGROUPS},
    {"ikelifetime",       KW_IKELIFETIME},
    {"keylife",           KW_KEYLIFE},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"ocspuri",           KW_OCSPURI},
    {"ocspuri2",          KW_OCSPURI2},
    {"auth",              KW_AUTH},
    {"rekey",             KW_REKEY},
    {""}, {""},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"xauth",             KW_XAUTH},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"ocspuri1",          KW_OCSPURI},
    {""},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {"prepluto",          KW_PREPLUTO},
    {"auto",              KW_AUTO},
    {""},
    {"authby",            KW_AUTHBY},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {"also",              KW_ALSO},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"charonstart",       KW_CHARONSTART},
    {"rightid",           KW_RIGHTID},
    {""}, {""}, {""},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {"dumpdir",           KW_DUMPDIR},
    {"fragicmp",          KW_FRAGICMP},
    {""}, {""},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"hidetos",           KW_HIDETOS},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"type",              KW_TYPE},
    {"plutodebug",        KW_PLUTODEBUG},
    {"leftid",            KW_LEFTID},
    {""},
    {"ldapbase",          KW_LDAPBASE},
    {"plutostderrlog",    KW_PLUTOSTDERRLOG},
    {""},
    {"keyingtries",       KW_KEYINGTRIES},
    {""},
    {"pfsgroup",          KW_PFSGROUP},
    {""}, {""}, {""}, {""},
    {"compress",          KW_COMPRESS},
    {""}, {""}, {""}, {""}, {""},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {"interfaces",        KW_INTERFACES},
    {"mobike",	           KW_MOBIKE},
    {""}, {""},
    {"uniqueids",         KW_UNIQUEIDS},
    {""},
    {"mediated_by",       KW_MEDIATED_BY},
    {""}, {""},
    {"mediation",         KW_MEDIATION},
    {""}, {""}, {""},
    {"ldaphost",          KW_LDAPHOST},
    {""}, {""},
    {"charondebug",       KW_CHARONDEBUG},
    {""},
    {"pfs",               KW_PFS},
    {""},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {""}, {""}, {""},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {""}, {""}, {""},
    {"me_peerid",         KW_ME_PEERID},
    {""}, {""}, {""}, {""},
    {"postpluto",         KW_POSTPLUTO},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"force_keepalive",   KW_FORCE_KEEPALIVE},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
    {"dpddelay",          KW_DPDDELAY},
    {""}, {""}, {""}, {""}, {""},
    {"dpdaction",         KW_DPDACTION},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""},
    {"modeconfig",        KW_MODECONFIG},
    {"forceencaps",       KW_FORCEENCAPS},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
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
