#include <bits/stdc++.h>

using namespace std;

int f(vector<long> arr) {

    if (arr.size() == 1) {
        return 1;
    }

    long right = 0;
    for (int i = 1; i < arr.size(); i++) {
        right += arr[i];
    }

    long left = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        right -= arr[i];

        if (left == right) {
            return i + 1;
        }

        left += arr[i];
    }

    return -1;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<long> arr;
        for (int j = 0; j < n; j++) {
            long tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        int result = f(arr);
        cout << result << endl;
    }

    return 0;
}