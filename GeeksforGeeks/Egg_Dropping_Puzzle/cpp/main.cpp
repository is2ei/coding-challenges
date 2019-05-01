#include <bits/stdc++.h>

using namespace std;

int memo[100][100] = {0};

int f(int n, int k) {

    if (memo[n][k] != -1) {
        return memo[n][k];
    }

    if (k == 0 || k == 1) {
        return k;
    }

    if (n == 1) {
        return k;
    }

    int min = 99999;
    for (int i = 1; i <= k; i++) {
        int result = max(
            f(n - 1, i - 1),
            f(n, k - i)
        );

        if (min > result) {
            min = result;
        }
    }

    memo[n][k] = min + 1;

    return memo[n][k];
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        int k;
        cin >> k;

        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 100; k++) {
                memo[j][k] = -1;
            }
        }

        int result = f(n, k);
        cout << result << endl;
    }

    return 0;
}