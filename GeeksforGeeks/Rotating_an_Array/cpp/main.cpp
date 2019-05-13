#include <bits/stdc++.h>

using namespace std;

void printResult(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[arr.size() - 1] << endl;
}

vector<int> f(vector<int>& arr, int& d) {

    /**
     * Time complexity: O(n)
     */

    if (d > arr.size()) {
        d = d % arr.size();
    }

    vector<int> tmp;
    int idx = 0;
    for (int i = d; i < arr.size(); i++) {
        tmp.push_back(arr[i]);
    }
    for (int i = 0; i < d; i++) {
        tmp.push_back(arr[i]);
    }

    return tmp;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        int d;
        cin >> d;

        vector<int> result = f(arr, d);
        printResult(result);
    }

    return 0;
}
