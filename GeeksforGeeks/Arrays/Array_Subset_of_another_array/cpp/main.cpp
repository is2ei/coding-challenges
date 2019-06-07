#include <bits/stdc++.h>

using namespace std;

string f(vector<int> arr1, vector<int> arr2) {

    std::set<int> s;
    for (int i = 0; i < arr1.size(); i++) {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++) {
        if (s.find(arr2[i]) == s.end()) {
            return "No";
        }
    }

    return "Yes";
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int m;
        cin >> m;

        int n;
        cin >> n;

        vector<int> arr1;
        for (int i = 0; i < m; i++) {
            int tmp;
            cin >> tmp;
            arr1.push_back(tmp);
        }

        vector<int> arr2;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            arr2.push_back(tmp);
        }

        string result = f(arr1, arr2);
        cout << result << endl;
    }
}
