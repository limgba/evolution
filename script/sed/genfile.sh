#!/bin/sh

file=$1
define=`echo $file | sed 's/\w/\u&/g'`
low=`echo $file | sed 's/\w/\l&/g'`
class=`echo $file | sed 's/^\w/\u&/g'`

sed -n 'w '"$file"'.cpp' basecpp.conf
sed -n 'w '"$file"'.h' basehead.conf

sed -i 's/\$define/'"$define"'/g' $file.cpp
sed -i 's/\$define/'"$define"'/g' $file.h

sed -i 's/\$file/'"$low"'/g' $file.cpp
sed -i 's/\$file/'"$low"'/g' $file.h

sed -i 's/\$class/'"$class"'/g' $file.cpp
sed -i 's/\$class/'"$class"'/g' $file.h

pwd=$PWD
cd ../../src
mkdir $file
cd $file
mv $pwd/$file* .
cd $pwd
