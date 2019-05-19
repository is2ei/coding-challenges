#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    return !(n & (n >> 1));
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        int result = f(n);
        cout << result << endl;
    }

    return 0;
}
