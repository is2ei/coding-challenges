#include <bits/stdc++.h>

using namespace std;

vector<int> f(vector<int> v) {

    int max = v[v.size() - 1];
    v[v.size() - 1] = -1;
    for (int i = v.size() - 2; i >= 0; i--) {
        if (max < v[i]) {
            int tmp = v[i];
            v[i] = max;
            max = tmp;
        } else {
            v[i] = max;
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

        vector<int> v;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;

            v.push_back(tmp);
        }

        vector<int> result = f(v);

        for (int i = 0; i < result.size() - 1; i++) {
            cout << result[i] << " ";
        }
        cout << result[result.size() - 1] << endl;

    }

    return 0;
}