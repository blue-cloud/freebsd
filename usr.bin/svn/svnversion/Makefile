# $FreeBSD: releng/10.1/usr.bin/svn/svnversion/Makefile 251886 2013-06-18 02:53:45Z peter $

NO_MAN=	svnversion.1

.include "${.CURDIR}/../Makefile.inc"

.PATH:	${SVNDIR}/svnversion

PROG=	svn${SVNLITE}version

SRCS=	svnversion.c

CFLAGS+=-I${SVNDIR}/include -I${SVNDIR} -I${.CURDIR}/.. \
	-I${.CURDIR}/../lib/libapr \
	-I${APR}/include/arch/unix \
	-I${APR}/include \
	-I${.CURDIR}/../lib/libapr_util \
	-I${APRU}/include/private \
	-I${APRU}/include

LDADD=	-L${LIBSVN_WCDIR} -lsvn_wc \
	-L${LIBSVN_DELTADIR} -lsvn_delta \
	-L${LIBSVN_DIFFDIR} -lsvn_diff \
	-L${LIBSVN_SUBRDIR} -lsvn_subr \
	-L${LIBAPR_UTILDIR} -lapr-util \
	-lbsdxml \
	-L${LIBAPRDIR} -lapr \
	-L${LIBSQLITEDIR} -lsqlite3 \
	-lz -lcrypt

DPADD=	${LIBSVN_WC} ${LIBSVN_DELTA} ${LIBSVN_DIFF} ${LIBSVN_SUBR} \
	${LIBSERF} ${LIBAPR_UTIL} ${LIBBSDXML} ${LIBAPR} ${LIBSQLITE} \
	${LIBZ} ${LIBCRYPT}

.include <bsd.prog.mk>
