import std.stdio;

int solveMeFirst (int a,int b) {
    // Hint: Type return a+b below 
  	return a+b;
}

void main()
{
    int a,b,res;
    readf("%d %d", &a,&b);
    res = solveMeFirst(a,b);
    writeln(res);
}
