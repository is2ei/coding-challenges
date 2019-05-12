#include<bits/stdc++.h>
using namespace std;
int maxDistance(int arr[], int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<maxDistance(arr,n)<<endl;
    }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// your task is to complete this function
int maxDistance(int arr[], int n) {
    std::map<int, int> m;

    int max = 0;
    for (int i = 0;  i < n; i++) {
        if (m.find(arr[i]) == m.end()) {
            m[arr[i]] = i;
        } else {
            if (max < i - m[arr[i]]) {
                max = i - m[arr[i]];
            }
        }
    }

    return max;
}
