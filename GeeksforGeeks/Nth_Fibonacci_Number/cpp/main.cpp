#include <bits/stdc++.h>

using namespace std;

int memo[2000] = {0};

unsigned int f2(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }

    unsigned int result = 0;
    if (n == 0) {
        result = 0;
    } else if (n == 1) {
        result = 1;
    } else {
        result = (f2(n - 1) + f2(n - 2)) % 1000000007;
    }

    memo[n] = result;
    return result;
}

unsigned int f(int n) {
    for (int i = 0; i < 2000; i++) {
        memo[i] = -1;
    }
    return f2(n);
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        unsigned int result = f(n);
        cout << result << endl;
    }

    return 0;
}
