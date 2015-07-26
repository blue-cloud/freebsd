#!/bin/sh -
# This script runs the .ed scripts generated by mkscripts.sh
# and compares their output against the .r files, which contain
# the correct output
#
# $FreeBSD: releng/10.1/bin/ed/test/ckscripts.sh 50471 1999-08-27 23:15:48Z peter $

PATH="/bin:/usr/bin:/usr/local/bin/:."
ED=$1
[ ! -x $ED ] && { echo "$ED: cannot execute"; exit 1; }

# Run the *.red scripts first, since these don't generate output;
# they exit with non-zero status
for i in *.red; do
	echo $i
	if $i; then
		echo "*** The script $i exited abnormally  ***"
	fi
done >errs.o 2>&1

# Run the remainding scripts; they exit with zero status
for i in *.ed; do
#	base=`expr $i : '\([^.]*\)'`
#	base=`echo $i | sed 's/\..*//'`
	base=`$ED - \!"echo $i" <<-EOF
		s/\..*
	EOF`
	if $base.ed; then
		if cmp -s $base.o $base.r; then :; else
			echo "*** Output $base.o of script $i is incorrect ***"
		fi
	else
		echo "*** The script $i exited abnormally ***"
	fi
done >scripts.o 2>&1

grep -h '\*\*\*' errs.o scripts.o
