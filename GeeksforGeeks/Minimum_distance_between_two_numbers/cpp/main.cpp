long long minDist(long long arr[], long long n, long long x, long long y)
{  
    //add code here.
    int min = -1;
    bool is_x = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] != x && arr[i] != y) {
            continue;
        }
        if (arr[i] == x) {
            is_x = true;
        }
        for (int j = i + 1; j < n; j++) {
            if (is_x && arr[j] == y) {
                if (min == -1 || min > j - i) {
                    min = j - i;
                }
            }
            if (!is_x && arr[j] == x) {
                if (min == -1 || min > j - i) {
                    min = j - i;
                }
            }
        }
        is_x = false;
    }
    
    return min;
}
