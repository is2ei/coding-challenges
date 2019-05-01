#include <bits/stdc++.h>

using namespace std;

vector<int> f(vector<int> arr) {

    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        for (int j = i; j >= 0; j--) {
            if (arr[i] >= arr[j]) {
                count++;
            } else {
                break;
            }
        }
        result.push_back(count);
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
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        vector<int> result = f(arr);

        if (!result.empty()) {
            for (int j = 0; j < result.size() - 1; j++) {
                cout << result[j] << " ";
            }
            cout << result[result.size() - 1] << endl;
        }

    }

    return 0;
}