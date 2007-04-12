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
 * RCSID $Id: keywords.txt,v 1.6 2006/04/17 10:30:27 as Exp $
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 90
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 15
#define MAX_HASH_VALUE 188
/* maximum key range = 174, duplicates = 0 */

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
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189,  40,
       10, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189,  80, 189,  20,
       75,   5,  95,   0,  30,   0, 189,  55,   0,  45,
        0,  35,  20, 189,  15,  70,  40,  15,  20, 189,
        0,  25,   0, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189, 189, 189, 189, 189,
      189, 189, 189, 189, 189, 189
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
    {""}, {""}, {""}, {""},
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
    {""}, {""},
    {"virtual_private",   KW_VIRTUAL_PRIVATE},
    {"crluri",            KW_CRLURI},
    {""},
    {"leftrsasigkey",     KW_LEFTRSASIGKEY},
    {""},
    {"rightnatip",        KW_RIGHTNATIP},
    {""},
    {"rightnexthop",      KW_RIGHTNEXTHOP},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"left",              KW_LEFT},
    {"rekey",             KW_REKEY},
    {"crlcheckinterval",  KW_CRLCHECKINTERVAL},
    {"crluri2",           KW_CRLURI2},
    {"leftcert",          KW_LEFTCERT,},
    {"rightrsasigkey",    KW_RIGHTRSASIGKEY},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"reauth",            KW_REAUTH},
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {""},
    {"right",             KW_RIGHT},
    {"charondebug",       KW_CHARONDEBUG},
    {"ocspuri",           KW_OCSPURI},
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
    {"ocspuri2",          KW_OCSPURI2},
    {"type",              KW_TYPE},
    {"keep_alive",        KW_KEEP_ALIVE},
    {"keyexchange",       KW_KEYEXCHANGE},
    {""},
    {"prepluto",          KW_PREPLUTO},
    {""},
    {"interfaces",        KW_INTERFACES},
    {"overridemtu",       KW_OVERRIDEMTU},
    {"crluri1",           KW_CRLURI},
    {""}, {""},
    {"leftgroups",        KW_LEFTGROUPS},
    {"leftid",            KW_LEFTID},
    {""},
    {"ldapbase",          KW_LDAPBASE},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"modeconfig",        KW_MODECONFIG},
    {"leftca",            KW_LEFTCA},
    {"pkcs11module",      KW_PKCS11MODULE},
    {"nat_traversal",     KW_NAT_TRAVERSAL},
    {"uniqueids",         KW_UNIQUEIDS},
    {"pkcs11keepstate",   KW_PKCS11KEEPSTATE},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"rightid",           KW_RIGHTID},
    {"esp",               KW_ESP},
    {"postpluto",         KW_POSTPLUTO},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"charonstart",       KW_CHARONSTART},
    {"rightca",           KW_RIGHTCA},
    {"ocspuri1",          KW_OCSPURI},
    {"dpdaction",         KW_DPDACTION},
    {""},
    {"eapdir",            KW_EAPDIR},
    {"hidetos",           KW_HIDETOS},
    {"eap",               KW_EAP},
    {""}, {""},
    {"pkcs11proxy",       KW_PKCS11PROXY},
    {"dumpdir",           KW_DUMPDIR},
    {""}, {""},
    {"xauth",             KW_XAUTH},
    {""}, {""},
    {"nocrsend",          KW_NOCRSEND},
    {"also",              KW_ALSO},
    {""}, {""}, {""},
    {"ldaphost",          KW_LDAPHOST},
    {""}, {""},
    {"authby",            KW_AUTHBY},
    {""},
    {"dpddelay",          KW_DPDDELAY},
    {"auth",              KW_AUTH},
    {""}, {""}, {""},
    {"compress",          KW_COMPRESS},
    {"auto",              KW_AUTO},
    {""}, {""}, {""},
    {"fragicmp",          KW_FRAGICMP},
    {""}, {""},
    {"keyingtries",       KW_KEYINGTRIES},
    {""},
    {"pfsgroup",          KW_PFSGROUP},
    {""},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"cacert",            KW_CACERT},
    {""}, {""}, {""},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {""}, {""},
    {"packetdefault",     KW_PACKETDEFAULT},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"cachecrls",         KW_CACHECRLS},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"pfs",               KW_PFS}
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
