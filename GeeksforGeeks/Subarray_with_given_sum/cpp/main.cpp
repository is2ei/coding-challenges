#include <bits/stdc++.h>

using namespace std;

vector<int> f(vector<int> arr, int s) {

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == s) {
            vector<int> v;
            v.push_back(i + 1);
            v.push_back(i + 1);
            return v;
        }

        int sum = arr[i];
        for (int j = i + 1; j < arr.size(); j++) {
            sum += arr[j];

            if (sum > s) {
                break;
            }

            if (sum == s) {
                vector<int> v;
                v.push_back(i + 1);
                v.push_back(j + 1);
                return v;
            }
        }
    }

    vector<int> v;
    return v;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        int s;
        cin >> s;

        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        vector<int> result = f(arr, s);
        if (result.size() == 2) {
            cout << result[0] << " " << result[1] << endl;
        } else {
            cout << -1 << endl;
        } 
    }

    return 0;
}