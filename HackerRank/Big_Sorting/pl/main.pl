#!/usr/bin/perl

use strict;
use warnings;

# Complete the bigSorting function below.
sub bigSorting {
    my $unsorted = shift;
    return sort { $a <=> $b } @$unsorted;
}

open(my $fptr, '>', $ENV{'OUTPUT_PATH'});

my $n = <>;
$n =~ s/\s+$//;
$n = int $n;

my @unsorted = ();

for (1..$n) {
    my $unsorted_item = <>;
    if (!$unsorted_item) {
        next;
    }
    chomp($unsorted_item);
    push @unsorted, $unsorted_item;
}

my @result = bigSorting \@unsorted;

print $fptr join "\n", @result;
print $fptr "\n";

close $fptr;
