#include <iostream>

long gcd(long a, long b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

long lcm(long a, long b) {
    return a * b / gcd(a, b);    
}

long f(int n) {
    long ans = 1;
    for (int i = 2; i <= n; i++) {
        ans = lcm(ans, i);
    }
    return ans;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        std::cin >> n;

        long result = f(n);
        std::cout << result << std::endl;
    }

    return 0;
}
