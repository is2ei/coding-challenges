#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr) {

    /**
     * Time Complexity O(n)
     */
    int x = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        x = x ^ arr[i];
    }

    return x;
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
