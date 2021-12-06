#!/bin/sh

pwd=$PWD
cd ../../src

mkdir $1
cd $1
$pwd/template.pl $1
cd $pwd
