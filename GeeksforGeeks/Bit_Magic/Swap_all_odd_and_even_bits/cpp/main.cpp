#include <iostream>
#include <bitset>

int f(int n) {
    // even: 0xAAAAAAAA
    // odd: 0x55555555
    return (n & 0x55555555) << 1 | (n & 0xAAAAAAAA) >> 1;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        
        int n;
        std::cin >> n;

        int result = f(n);
        std::cout << result << std::endl;
    }

    return 0;
}
