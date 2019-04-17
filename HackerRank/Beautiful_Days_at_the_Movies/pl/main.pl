#!/usr/bin/perl

use strict;
use warnings;

# Complete the beautifulDays function below.
sub beautifulDays {
    my ($i, $j, $k) = @_;

    $i = int $i;
    $j = int $j;
    $k = int $k;

    my $count = 0;
    foreach ($i ... $j) {
        my $e = $_."";
        my $r = reverse $e;

        if ($e == $r) {
            $count++;
            next;
        }

        my $result = abs (int($e) - int($r));
        $result /= $k;

        if ($result - int $result == 0) {
            $count++;
        }
    }

    return $count;
}

open(my $fptr, '>', $ENV{'OUTPUT_PATH'});

my $ijk = <>;
$ijk =~ s/\s+$//;
my @ijk = split /\s+/, $ijk;

my $i = $ijk[0];
$i =~ s/\s+$//;

my $j = $ijk[1];
$j =~ s/\s+$//;

my $k = $ijk[2];
$k =~ s/\s+$//;

my $result = beautifulDays $i, $j, $k;

print $fptr "$result\n";

close $fptr;
