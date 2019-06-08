#include <iostream>

long memo[101][101] = {0};

long f2(int n, int m) {
    if (n < 1 || m < 1) {
        return 0;
    }
    if (n == 1 && m == 1) {
        return 1;
    }
    if (memo[n][m] > 0) {
        return memo[n][m];
    }
    memo[n][m] = (f2(n - 1, m) + f2(n, m - 1)) % 1000000007;
    return memo[n][m];
}

long f(int n, int m) {
    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            memo[i][j] = 0;
        }
    }
    return f2(n, m);
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n, m;
        std::cin >> n >> m;

        long result = f(n, m);
        std::cout << result << std::endl;
    }

    return 0;
}
