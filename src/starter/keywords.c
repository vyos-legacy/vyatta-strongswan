/* C code produced by gperf version 3.0.1 */
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
 * Copyright (C) 2007 Tobias Brunner
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
 * RCSID $Id: keywords.txt 3267 2007-10-08 19:57:54Z andreas $
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 98
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 15
#define MAX_HASH_VALUE 236
/* maximum key range = 222, duplicates = 0 */

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
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237,  40,
        5, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237,  90, 237,  25,
       75,   5,  85,   0,  95,   0, 237,  55,   0,  45,
        0,  70,  20, 237,  15,  70,  40,  20,   5, 237,
        5,  65,   0, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237, 237, 237, 237, 237,
      237, 237, 237, 237, 237, 237
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]] + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""},
    {"leftupdown",        KW_LEFTUPDOWN},
    {""},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {""}, {""}, {""},
    {"leftsubnetwithin",  KW_LEFTSUBNETWITHIN},
    {""}, {""}, {""},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {""},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"plutodebug",        KW_PLUTODEBUG},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"rightsubnetwithin", KW_RIGHTSUBNETWITHIN},
    {""},
    {"leftnatip",         KW_LEFTNATIP},
    {""},
    {"leftnexthop",       KW_LEFTNEXTHOP},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"p2p_mediation",     KW_P2P_MEDIATION},
    {""}, {""}, {""}, {""}, {""}, {""},
    {"rightnatip",        KW_RIGHTNATIP},
    {"crluri",            KW_CRLURI},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"left",              KW_LEFT},
    {""}, {""},
    {"crluri2",           KW_CRLURI2},
    {"leftcert",          KW_LEFTCERT,},
    {""},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {""},
    {"right",             KW_RIGHT},
    {""}, {""},
    {"ike",               KW_IKE},
    {"rightcert",         KW_RIGHTCERT},
    {"klipsdebug",        KW_KLIPSDEBUG},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {""},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"plutostart",        KW_PLUTOSTART},
    {"ikelifetime",       KW_IKELIFETIME},
    {"keylife",           KW_KEYLIFE},
    {""}, {""},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"keyexchange",       KW_KEYEXCHANGE},
    {""}, {""}, {""},
    {"interfaces",        KW_INTERFACES},
    {""},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {""},
    {"leftgroups",        KW_LEFTGROUPS},
    {"leftid",            KW_LEFTID},
    {"crluri1",           KW_CRLURI},
    {"ldapbase",          KW_LDAPBASE},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"rekey",             KW_REKEY},
    {""},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"rightid",           KW_RIGHTID},
    {"esp",               KW_ESP},
    {"uniqueids",         KW_UNIQUEIDS},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"leftca",            KW_LEFTCA},
    {"ocspuri",           KW_OCSPURI},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"dpdaction",         KW_DPDACTION},
    {"p2p_mediated_by",   KW_P2P_MEDIATED_BY},
    {"overridemtu",       KW_OVERRIDEMTU},
    {""},
    {"ocspuri2",          KW_OCSPURI2},
    {""},
    {"p2p_peerid",        KW_P2P_PEERID},
    {""},
    {"rightca",           KW_RIGHTCA},
    {"prepluto",          KW_PREPLUTO},
    {"type",              KW_TYPE},
    {""},
    {"eapdir",            KW_EAPDIR},
    {"dumpdir",           KW_DUMPDIR},
    {"eap",               KW_EAP},
    {""}, {""},
    {"reauth",            KW_REAUTH},
    {""},
    {"ldaphost",          KW_LDAPHOST},
    {""},
    {"modeconfig",        KW_MODECONFIG},
    {"mobike",	           KW_MOBIKE},
    {""},
    {"fragicmp",          KW_FRAGICMP},
    {""}, {""},
    {"charondebug",       KW_CHARONDEBUG},
    {""},
    {"pfsgroup",          KW_PFSGROUP},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"keyingtries",       KW_KEYINGTRIES},
    {""},
    {"ocspuri1",          KW_OCSPURI},
    {""},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {""}, {""}, {""}, {""}, {""},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {""},
    {"nocrsend",          KW_NOCRSEND},
    {""}, {""}, {""}, {""}, {""},
    {"pkcs11initargs",    KW_PKCS11INITARGS},
    {""},
    {"cacert",            KW_CACERT},
    {""},
    {"packetdefault",     KW_PACKETDEFAULT},
    {"also",              KW_ALSO},
    {""}, {""}, {""},
    {"dpddelay",          KW_DPDDELAY},
    {"postpluto",         KW_POSTPLUTO},
    {""},
    {"charonstart",       KW_CHARONSTART},
    {"hidetos",           KW_HIDETOS},
    {"compress",          KW_COMPRESS},
    {""}, {""}, {""}, {""},
    {"pfs",               KW_PFS},
    {""}, {""},
    {"authby",            KW_AUTHBY},
    {""}, {""},
    {"auto",              KW_AUTO},
    {""}, {""}, {""}, {""}, {""},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {""}, {""}, {""},
    {"cachecrls",         KW_CACHECRLS},
    {"xauth",             KW_XAUTH},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
    {"auth",              KW_AUTH},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"forceencaps",       KW_FORCEENCAPS}
  };

#ifdef __GNUC__
__inline
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
