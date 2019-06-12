#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr, int x) {

    /**
     * Linear search
     * O(n)
     */
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            return i;
        }
    }

    return -1;
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

        int x;
        cin >> x;

        int result = f(arr, x);
        cout << result << endl;
    }

    return 0;
}
