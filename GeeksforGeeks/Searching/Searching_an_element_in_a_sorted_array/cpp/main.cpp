#include <bits/stdc++.h>

using namespace std;

int f2(vector<int>& arr, int k, int min, int max) {
    if (max < min) {
        return -1;
    } else {
        int mid = min + (max - min) / 2;
        if (arr[mid] < k) {
            return f2(arr, k, mid + 1, max);
        } else if (arr[mid] > k) {
            return f2(arr, k, min, mid - 1);
        } else {
            return 1;
        }
    }
}

int f(vector<int> arr, int k) {
    return f2(arr, k, 0, arr.size() - 1);
}


int main() {

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int k;
        cin >> k;

        vector<int> arr;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }
        int result = f(arr, k);
        cout << result << endl;
    }

    return 0;
}