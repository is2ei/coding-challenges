#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr) {

    int result = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        result = result ^ arr[i];
    }

    for (int i = 1; i <= arr.size() + 1; i++) {
        result = result ^ i;
    }

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> arr;
        for (int i = 0; i < n - 1; i++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        int result = f(arr);
        cout << result << endl;
    }

    return 0;
}