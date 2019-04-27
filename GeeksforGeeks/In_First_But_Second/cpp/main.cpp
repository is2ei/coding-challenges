#include <bits/stdc++.h>

using namespace std;

vector<long> f(vector<long> a, vector<long> b) {

    map<long, bool> m;
    for (int i = 0; i < b.size(); i++) {
        m[b[i]] = true;
    }

    vector<long> v;
    for (int i = 0; i < a.size(); i++) {
        if (m.find(a[i]) == m.end()) {
            v.push_back(a[i]);
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

        int m;
        cin >> m;

        vector<long> a;
        for (int i = 0; i < n; i++) {
            long tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        vector<long> b;
        for (int i = 0; i < m; i++) {
            long tmp;
            cin >> tmp;
            b.push_back(tmp);
        }

        vector<long> result = f(a, b);

        if (!result.empty()) {
            for (int i = 0; i < result.size() - 1; i++) {
                cout << result[i] << " ";
            }
            cout << result[result.size() - 1] << endl;
        }
    }

    return 0;
}
