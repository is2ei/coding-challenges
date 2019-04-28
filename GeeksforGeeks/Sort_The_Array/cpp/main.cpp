#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> a;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        sort(a.begin(), a.end());

        for (int j = 0; j < a.size() - 1; j++) {
            cout << a[j] << " ";
        }
        cout << a[a.size() - 1] << endl;

    }

    return 0;
}