#!/bin/perl

$file=$ARGV[0];
$head_file='#ifndef $define_H
#define $define_H

class $class
{
public:

private:
	
};

#endif
';

$cpp_file='#include "$file.h"
';

$up=$file;
$up =~ s/\w/\u$&/g;

$low=$file;
$low =~ s/\w/\l$&/g;

$class=$file;
$class =~ s/^\w/\u$&/g;

$head_file =~ s/\$define/$up/g;
$head_file =~ s/\$class/$class/g;
$head_file =~ s/\$file/$low/g;

$cpp_file =~ s/\$file/$low/g;

open(DATA1, ">$file.h");
print DATA1 $head_file;
close(DATA1);

open(DATA2, ">$file.cpp");
print DATA2 $cpp_file;
close(DATA2);
