// C program for implementation of Merge Sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r);
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */
// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int a = m - l + 1;
    int b = r - m;
    
    int left[a];
    int right[b];
    
    for (int i = 0; i < a; i++) {
        left[i] = arr[l + i];
    }
    
    for (int i = 0; i < b; i++) {
        right[i] = arr[m + 1 + i];
    }
    
    
    int i = 0;
    int j = 0;
    int k = l;
    while (i < a && j < b) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    while (i < a) {
        arr[k] = left[i];
        i++;
        k++;
    }
    
    while (j < b) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
