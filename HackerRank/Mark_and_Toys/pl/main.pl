#!/usr/bin/perl

use strict;
use warnings;

# Complete the maximumToys function below.
sub maximumToys {
    my ($prices, $k) = @_;

    $k = int($k);
    @$prices = sort { $a <=> $b } map { int($_) } @$prices;

    my $count = 0;
    foreach my $price (@$prices) {
        if ($k < $price) {
            return $count;
        } else {
            $k -= $price;
            $count++;
        }
    }

    return $count;
}

open(my $fptr, '>', $ENV{'OUTPUT_PATH'});

my $nk = <>;
$nk =~ s/\s+$//;
my @nk = split /\s+/, $nk;

my $n = $nk[0];
$n =~ s/\s+$//;

my $k = $nk[1];
$k =~ s/\s+$//;

my $prices = <>;
$prices =~ s/\s+$//;
my @prices = split /\s+/, $prices;

my $result = maximumToys \@prices, $k;

print $fptr "$result\n";

close $fptr;
