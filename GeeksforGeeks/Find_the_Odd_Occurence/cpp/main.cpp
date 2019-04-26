#include <bits/stdc++.h>

using namespace std;

vector<int> f(vector<int> arr) {

    sort(arr.begin(), arr.end());

    vector<int> v;
    int count = 1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] != arr[i]) {
            if (count % 2 != 0) {
                v.push_back(arr[i - 1]);
            }
            count = 1;
        } else {
            count++;
        }
    }
    
    if (count % 2 != 0) {
        v.push_back(arr[arr.size() - 1]);
    }

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

        if (result.empty()) {
            cout << 0 << endl;
        } else {
            for (int j = 0; j < result.size() - 1; j++) {
                cout << result[j] << " ";
            }
            cout << result[result.size() - 1] << endl;
        }
    }

    return 0;
}