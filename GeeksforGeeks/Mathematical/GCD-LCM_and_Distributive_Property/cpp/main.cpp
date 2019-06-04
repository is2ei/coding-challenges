#include <iostream>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int f(int x, int y, int z) {
    return lcm(x, gcd(y, z));
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int x, y, z;
        std::cin >> x >> y >> z;

        int result = f(x, y, z);
        std::cout << result << std::endl;
    }

    return 0;
}
