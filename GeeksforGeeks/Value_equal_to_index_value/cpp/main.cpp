#include <bits/stdc++.h>

using namespace std;

vector<string> f(vector<int> arr) {

    vector<string> v;
    for (int i = 0; i < arr.size(); i++) {
        if (i + 1 == arr[i]) {
            std::stringstream ss;
            ss << arr[i];
            v.push_back(ss.str());
        }
    }

    if (v.empty()) {
        v.push_back("Not Found");
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
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        vector<string> result = f(arr);
        for (int i = 0; i < result.size() - 1; i++) {
            cout << result[i] << " ";
        }
        cout << result[result.size() - 1] << endl;
    }
}
