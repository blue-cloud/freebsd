# $FreeBSD: releng/10.1/etc/periodic/weekly/Makefile 254974 2013-08-27 21:20:28Z jlh $

.include <bsd.own.mk>

FILES=	340.noid \
	450.status-security \
	999.local

# NB: keep these sorted by MK_* knobs

.if ${MK_LOCATE} != "no"
FILES+=	310.locate
.endif

.if ${MK_MAN_UTILS} != "no"
FILES+=	320.whatis 330.catman
.endif

.if ${MK_PKGTOOLS} != "no"
FILES+=	400.status-pkg
.endif

.include <bsd.prog.mk>
