#include <iostream>

int memo[1000000] = {0};

int f(int n) {

    if (n < 3) {
        return 0;
    }
    if (n < 5) {
        return 1;
    }

    if (memo[n] > 0) {
        return memo[n];
    }

    memo[n] = (f(n - 1) + f(n - 2) + f(n - 3)) % 10007;
    return memo[n];
}

int main() {

    int n;
    std::cin >> n;

    int result = f(n);
    std::cout << result << std::endl;

    return 0;
}
