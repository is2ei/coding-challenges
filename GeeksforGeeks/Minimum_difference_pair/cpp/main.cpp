#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr) {

    sort(arr.begin(), arr.end());

    if (arr.size() <= 1) {
        return 0;
    }

    int min = arr[1] - arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (min > arr[i] - arr[i - 1]) {
            min = arr[i] - arr[i - 1];
        }
    }

    return min;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        
        int n;
        cin >> n;

        vector<int> arr;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        int result = f(arr);
        cout << result << endl;
    }

    return 0;
}