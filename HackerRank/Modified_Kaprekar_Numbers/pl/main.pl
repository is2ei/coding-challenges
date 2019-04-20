#!/usr/bin/perl

use strict;
use warnings;

# Complete the kaprekarNumbers function below.
sub kaprekarNumbers {
    my ($p, $q) = @_;

    $p = int $p;
    $q = int $q;

    my @kaprekar_numbers = ();

    foreach ($p...$q) {
        my $n = int $_;
        my $s = $n * $n;

        my $r = substr $s, 0, length($s) / 2;
        my $l;
        if (length $s % 2 == 0) {
            $l = substr $s, length($s) / 2, length($s) - length($s) / 2;
        } else {
            $l = substr $s, length($s) / 2, (length($s) + 1) - length($s) / 2;
        }

        my $sum = 0;
        $sum += int $r if (length $r > 0);
        $sum += int $l if (length $l > 0);

        if ($n == $sum) {
            push @kaprekar_numbers, $n;
        }
    }

    return \@kaprekar_numbers;
}

sub printResult {
    my $r = shift;

    my $len = @$r;

    if ($len == 0) {
        print "INVALID RANGE\n";
    } else {
        print join(" ", @$r) . "\n";
    }
}

my $p = <>;
$p =~ s/\s+$//;

my $q = <>;
$q =~ s/\s+$//;

my $result = kaprekarNumbers $p, $q;

printResult $result;
