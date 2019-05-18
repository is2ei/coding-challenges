#include <bits/stdc++.h>

using namespace std;

void printResult(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << arr[i];
        if (i + 1 == arr.size()) {
            cout << endl;
        }
    }
}

vector<int> solve(vector<int> s, vector<int> f) {
    vector<int> idx;
    for (int i = 0; i < s.size(); i++) {
        idx.push_back(i);
    }

    /**
     * Bubble sort
     * O(n^2)
     */
    for (int i = 0; i < idx.size(); i++) {
        for (int j = idx.size() - 1; j > i; j--) {
            if (f[idx[j - 1]] > f[idx[j]]) {
                std::swap(idx[j - 1], idx[j]);
            }
        }
    }

    vector<int> result;
    result.push_back(idx[0] + 1);
    for (int i = 1; i < idx.size(); i++) {
        if (s[idx[i]] >= f[result.back() - 1]) {
            result.push_back(idx[i] + 1);
        }
    }

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> s;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            s.push_back(tmp);
        }

        vector<int> f;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            f.push_back(tmp);
        }

        vector<int> result = solve(s, f);
        printResult(result);
    }

    return 0;
}
