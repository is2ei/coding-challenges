#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr) {

    int count[100000] = {0};
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
        if (count[arr[i]] > arr.size() / 2) {
            return arr[i];
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
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        int result = f(arr);
        cout << result << endl;
    }
    return 0;
}