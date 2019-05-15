#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    if (n && !(n & (n - 1))) {
        return n;
    }

    int count = 0;
    while (n > 0) {
        n >>= 1;
        count++;
    }

    return (1 << count);
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
