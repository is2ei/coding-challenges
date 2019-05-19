sub solveMeFirst{
    ($x,$y) = @_; 
    # Hint: Type $res = $x + $y; below 
    my $res = $x + $y;
    return $res ;   
}

$choice1 = <STDIN> ;
$choice2 = <STDIN> ;
$res = solveMeFirst($choice1 , $choice2);
print "$res" ;
