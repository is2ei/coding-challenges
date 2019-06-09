#include <iostream>
#include <bitset>

unsigned int f(unsigned int x) {

    unsigned int result = 0;
    for (int i = 1; i < 32; i++) {
        result += x & 1;
        x >>= 1;
        result <<= 1;
    }

    return result;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        unsigned int x;
        std::cin >> x;

        unsigned int result = f(x);
        std::cout << result << std::endl;
    }

    return 0;
}
