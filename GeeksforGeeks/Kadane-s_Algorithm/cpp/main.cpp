#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr) {

    int sum = arr[0];
    int max = sum;
    for (int i = 1; i < arr.size(); i++) {
        if (sum + arr[i] < arr[i]) {
            sum = arr[i];
        } else {
            sum += arr[i];
        }
        if (max < sum) {
            max = sum;
        }
    }

    return max;
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