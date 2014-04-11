#!/bin/bash

name=`ls`
echo "name = $name"
for m in $name
do
	echo $m

	if [ -d $m ]; then
		cd $m
	fi

	pwd
	cd -
done
