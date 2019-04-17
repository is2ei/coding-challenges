#!/usr/bin/perl

use strict;
use warnings;

# Complete the superDigit function below.
sub superDigit {
    my ($n, $k) = @_;

    $k = int $k;

    my $tmp = 0;
    foreach (split //, $n) {
        $tmp += int $_;
    }

    $n = $tmp * $k;

    while (1) {
        last if (length($n) == 1);

        my @arr = split //, $n;

        my $tmp = 0;
        foreach(@arr) {
            $tmp += int $_;
        }

        $n = $tmp;
    }

    return $n;
}

open(my $fptr, '>', $ENV{'OUTPUT_PATH'});

my $nk = <>;
$nk =~ s/\s+$//;
my @nk = split /\s+/, $nk;

my $n = $nk[0];
chomp($n);

my $k = $nk[1];
$k =~ s/\s+$//;

my $result = superDigit $n, $k;

print $fptr "$result\n";

close $fptr;
