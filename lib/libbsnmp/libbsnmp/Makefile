# $FreeBSD: releng/10.1/lib/libbsnmp/libbsnmp/Makefile 244931 2013-01-01 18:29:25Z antoine $
#
# Author: Harti Brandt <harti@freebsd.org>

.include <bsd.own.mk>

CONTRIB= ${.CURDIR}/../../../contrib/bsnmp/lib
.PATH: ${CONTRIB}

LIB=	bsnmp
SHLIB_MAJOR=	6

CFLAGS+= -I${CONTRIB} -DHAVE_ERR_H -DHAVE_GETADDRINFO -DHAVE_STRLCPY
CFLAGS+= -DHAVE_STDINT_H -DHAVE_INTTYPES_H -DQUADFMT='"llu"' -DQUADXFMT='"llx"'

.if ${MK_OPENSSL} != "no"
CFLAGS+= -DHAVE_LIBCRYPTO
DPADD+= ${LIBCRYPTO}
LDADD+= -lcrypto
.endif

SRCS=	asn1.c snmp.c snmpagent.c snmpclient.c snmpcrypto.c support.c
INCS=	asn1.h snmp.h snmpagent.h snmpclient.h 
MAN=	asn1.3 bsnmplib.3 bsnmpclient.3 bsnmpagent.3

.include <bsd.lib.mk>
