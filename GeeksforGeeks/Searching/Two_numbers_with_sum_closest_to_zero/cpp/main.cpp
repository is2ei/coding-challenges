#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr) {

    sort(arr.begin(), arr.end());

    int min = 99999;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (abs(min) > abs(arr[i] + arr[j])) {
                min = arr[i] + arr[j];
            }
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