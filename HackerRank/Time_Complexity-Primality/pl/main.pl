#!/usr/bin/perl

use strict;
use warnings;

# Complete the primality function below.
sub primality {
    my $n = shift;
    $n = int $n;

    if ($n == 1) {
        return "Not prime";
    }

    return "Prime";
}

open(my $fptr, '>', $ENV{'OUTPUT_PATH'});

my $p = <>;
$p =~ s/\s+$//;

for (my $p_itr = 0; $p_itr < $p; $p_itr++) {
    my $n = <>;
    $n =~ s/\s+$//;

    my $result = primality $n;

    print $fptr "$result\n";
}

close $fptr;
