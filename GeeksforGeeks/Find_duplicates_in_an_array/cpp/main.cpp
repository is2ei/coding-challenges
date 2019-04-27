#include <bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n);
int main()
{
  int t;
  cin>>t;
  while(t-- > 0){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		printDuplicates(a, n);
		cout<<endl;
  }
  return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below*/
void printDuplicates(int arr[], int n)
{
    int count[n] = {0};

    bool has_prev = false;
    for (int i = 0; i < n; i++) {
        
        count[arr[i]]++;
        
        
        if (count[arr[i]] == 2) {
            if (has_prev) {
                cout << " ";
            }
            has_prev = true;
            cout << arr[i];
        }
    }
    
    if (has_prev) {
        
    } else {
        cout << -1;
    }
}