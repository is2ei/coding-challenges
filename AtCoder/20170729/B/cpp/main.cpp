#include <iostream>

int f(int n) {
    int res = 1;
    while (res <= n) {
        res <<= 1;
    }
    return res >> 1;
}

int main() {

    int n;
    std::cin >> n;

    int res = f(n);
    std::cout << res << std::endl;

    return 0;
}
