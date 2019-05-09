#include<bits/stdc++.h>
using namespace std;
int max_sum(int A[],int N);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method*/
int max_sum(int A[],int N)
{
    int max = INT_MIN;
    int n = 0;
    for (int i = 0; i < N; i++) {
        
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += A[j] * ((j + n) % N);
        }

        if (max < sum) {
            max = sum;
        }

        n++;
    }

    return max;    
}
