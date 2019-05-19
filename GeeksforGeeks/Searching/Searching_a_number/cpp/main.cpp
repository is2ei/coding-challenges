#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a, int k) {

    /**
     * Linear Search
     * O(n)
     */
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == k) {
            return i + 1;
        }
    }

    return -1;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n, k;
        cin >> n >> k;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a, k);
        cout << result << endl;
    }

    return 0;
}
