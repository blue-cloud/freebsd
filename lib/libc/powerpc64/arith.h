/*
 * MD header for contrib/gdtoa
 *
 * $FreeBSD: releng/10.1/lib/libc/powerpc64/arith.h 209878 2010-07-10 14:45:03Z nwhitehorn $
 */

/*
 * NOTE: The definitions in this file must be correct or strtod(3) and
 * floating point formats in printf(3) will break!  The file can be
 * generated by running contrib/gdtoa/arithchk.c on the target
 * architecture.  See contrib/gdtoa/gdtoaimp.h for details.
 */

#define IEEE_MC68k
#define Arith_Kind_ASL 2
#define Double_Align