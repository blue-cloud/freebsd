# $FreeBSD: releng/10.1/cddl/usr.bin/Makefile 265037 2014-04-28 04:20:14Z jmmv $

.include <bsd.own.mk>

SUBDIR= \
	ctfconvert \
	ctfdump \
	ctfmerge \
	sgsmsg \
	${_tests} \
	${_zinject} \
	${_zlook} \
	${_zstreamdump} \
	${_ztest}

.if ${MK_TESTS} != "no"
_tests=	tests
.endif

.if ${MK_ZFS} != "no"
_zinject= zinject
#_zlook= zlook
.if ${MK_LIBTHR} != "no"
_ztest=	ztest
_zstreamdump = zstreamdump
.endif
.endif

.include <bsd.subdir.mk>
