#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a) {

    int incl = a[0];
    int excl = 0;
    for (int i = 1; i < a.size(); i++) {
        int tmp = incl;
        incl = excl + a[i];
        excl = std::max(tmp, excl);
    }

    return std::max(incl, excl);
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a);
        cout << result << endl;
    }

    return 0;
}
