# $FreeBSD: releng/10.1/gnu/usr.bin/gdb/arch/ia64/Makefile 203960 2010-02-16 16:38:57Z marcel $

.if !defined(GDB_CROSS_DEBUGGER)
LIBSRCS+= fbsd-proc.c fbsd-threads.c gcore.c
LIBSRCS+= ia64-fbsd-nat.c
.endif
LIBSRCS+= solib.c solib-svr4.c
LIBSRCS+= ia64-fbsd-tdep.c ia64-tdep.c

nm.h:
	echo '#include "ia64/nm-fbsd.h"' > ${.TARGET}

tm.h:
	echo '#include "ia64/tm-fbsd.h"' > ${.TARGET}
