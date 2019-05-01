#include <bits/stdc++.h>

using namespace std;

vector<int> f(vector<int> arr) {

    int count[3] = {0};
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }

    vector<int>v;
    for (int i = 0; i < 3; i++) {
        while(count[i] > 0) {
            v.push_back(i);        
            count[i]--;
        }
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
        if (!result.empty()) {
            for (int j = 0; j < result.size() - 1; j++) {
                cout << result[j] << " ";
            }
            cout << result[result.size() - 1] << endl;
        }
    }

    return 0;
}