#!/bin/bash

[ -f main ] || exit 1

out=`./main`

if [[ $out =~ "Hello world" ]]; then
	if ! [ "${out:11:1}" = "!" ]; then
		echo "1"
		exit 1
	fi

	if ! [ "${out:12:1}" = "\n" ]; then
		echo "2"
		exit 1
	fi
else
	echo "3"
	exit 1
fi
