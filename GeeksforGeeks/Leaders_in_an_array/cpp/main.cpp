#include <bits/stdc++.h>

using namespace std;

vector<int> f(vector<int> arr) {
    
    vector<int> v;
    int max = arr[arr.size() - 1];
    v.push_back(max);
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (max <= arr[i]) {
            max = arr[i];
            v.push_back(max);
        }
    }

    reverse(v.begin(), v.end());

    return v;
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

        vector<int> result = f(arr);

        for (int i = 0; i < result.size() - 1; i++) {
            cout << result[i] << " ";
        }
        cout << result[result.size() - 1] << endl;
    }

    return 0;
}
