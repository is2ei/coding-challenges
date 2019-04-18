#!/usr/bin/perl

use strict;
use warnings;

# Complete the arrayManipulation function below.
sub arrayManipulation {
    my ($n, $queries) = @_;

#    my @arr = ();
#    foreach (0..$n) {
#        push @arr, 0;
#    }

#    foreach (@$queries) {
#        my $query = $_;
#
#        my ($a, $b, $k) = @$query;
#
#        $k = int $k;
#
#        foreach ($a..$b) {
#            my $idx = $_;
#            $idx = int $idx;
#
#            $arr[$idx] += $k;
#        }
#    }

#    my $max = 0;
#    foreach (@arr) {
#        my $v = $_;
#        $v = int $v;
#
#        if ($max < $v) {
#            $max = $v;
#        }
#    }

    my %begin = ();
    my %end = ();
    foreach (@$queries) {
        my ($a, $b, $k) = @$_;

        $a = int $a;
        $b = int $b;

        $begin{$a} = 1;
        $end{$b} = 1;
    }

    foreach (sort {$b <=> $a} keys %begin) {
        print $_ . "\n";
    }

    foreach (sort {$b <=> $a} keys %end) {
        print $_ . "\n";
    }

    my $max = 0;

    return $max;
}

open(my $fptr, '>', $ENV{'OUTPUT_PATH'});

my $nm = <>;
$nm =~ s/\s+$//;
my @nm = split /\s+/, $nm;

my $n = $nm[0];
$n =~ s/\s+$//;

my $m = $nm[1];
$m =~ s/\s+$//;

my @queries = ();

for (1..$m) {
    my $queries_item = <>;
    $queries_item =~ s/\s+$//;
    my @queries_item = split /\s+/, $queries_item;

    push @queries, \@queries_item;
}

my $result = arrayManipulation $n, \@queries;

print $fptr "$result\n";

close $fptr;
