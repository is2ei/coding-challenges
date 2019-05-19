#include<iostream>
using namespace std;
int isPowerOfFour(unsigned int n);
/*Driver program to test above function*/
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
if(isPowerOfFour(n))
	cout<<1<<endl;
else
	cout<<0<<endl;
}
//getchar();
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

int isPowerOfFour(unsigned int n)
{
    // Check if n is power of 2
    if (n && !(n & (n - 1))) {
        // Check if n is power of 4
        int count;
        n = (n ^ (n - 1)) >> 1;
        for (count = 0; n; count++) {
            n >>= 1;
        }
        if (!(count & 1)) {
            return 1;
        }
    }
    
    return 0;
}
