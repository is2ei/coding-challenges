#!/usr/bin/perl

use strict;
use warnings;

# Complete the countTriplets function below.
sub countTriplets {
    my ($arr, $r) = @_;

    $r = int $r;

    my $count = 0;
    my %left = ();
    my %right = ();

    foreach (@$arr) {
        my $e = int $_;

        if ($right{$e}) {
            $right{$e}++;
        } else {
            $right{$e} = 1;
        }
    }

    foreach (@$arr) {
        my $e = int $_;

        $right{$e}--;

        if ($left{$e / $r} && $right{$e * $r}) {
            $count += $left{$e / $r} * $right{$e * $r};
        }

        if ($left{$e}) {
            $left{$e}++;
        } else {
            $left{$e} = 1;
        }
    }

    return $count;
}

open(my $fptr, '>', $ENV{'OUTPUT_PATH'});

my @nr = split /\s+/, rtrim(my $nr_temp = <STDIN>);

my $n = $nr[0];

my $r = $nr[1];

my $arr = rtrim(my $arr_temp = <STDIN>);

my @arr = split /\s+/, $arr;

my $ans = countTriplets \@arr, $r;

print $fptr "$ans\n";

close $fptr;

sub ltrim {
    my $str = shift;

    $str =~ s/^\s+//;

    return $str;
}

sub rtrim {
    my $str = shift;

    $str =~ s/\s+$//;

    return $str;
}
