#include<bits/stdc++.h>
using namespace std;  
int gtXor(int arr[], int n,int a,int b);
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int m=min(a,b);
		int l=max(a,b);
		cout<<gtXor(arr,n,m,l)<<endl;
	}
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below*/
int gtXor(int arr[], int n,int a,int b)
{
    int result = arr[a];
    for (int i = a + 1; i <= b; i++) {
        result = result ^ arr[i];
    }
    
    return result;
}
