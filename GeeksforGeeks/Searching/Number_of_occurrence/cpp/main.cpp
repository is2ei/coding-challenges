#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a, int x) {
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == x) {
            count++;
        }
    }
    if (count == 0) {
        count = -1;
    }
    return count;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n, x;
        cin >> n >> x;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a, x);
        cout << result << endl;
    }
}
