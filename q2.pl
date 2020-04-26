$x = 1;
sub func1 
{
    return $x;
}
sub static 
{
    my $x = 2;
    return func1();
}
$y = 3;
sub func2 
{
    return $y;
}
sub dynamic 
{
    local $y = 4;
    return func2();
}
print "static output ", static(), "\n";
#print 1 from global, by using “my” the variable will only usable inside the block, any method call from outside wouldn’t affect.
print "dynamic output ", dynamic(), "\n";
#print 4 from local, by using “local” inside the method will shadow the variable  that is outside with same name.in chapter, the dynamic scope is refers to change, the variables can be change depending on which method was been called.
