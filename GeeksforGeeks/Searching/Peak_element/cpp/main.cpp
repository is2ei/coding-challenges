int peak(int arr[], int n)
{
   // Your code here
    int peak = arr[0];
    int peak_idx = 0;
    for (int i = 0; i < n; i++) {
        if (peak < arr[i]) {
            peak = arr[i];
            peak_idx = i;
        }
    }
    
    return peak_idx;
}