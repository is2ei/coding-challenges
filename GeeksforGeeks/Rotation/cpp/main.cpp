#include <bits/stdc++.h>

using namespace std;

int f(vector<long> arr) {

    int min_idx = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] > arr[i]) {
            return i;
        }
    }

    return 0;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<long> arr;
        for (int i = 0; i < n; i++) {
            long tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        int result = f(arr);
        cout << result << endl;
    }

    return 0;
}
