#include <iostream>

bool f(int m, int d) {
    return m % d == 0;
}

int main() {

    int m, d;
    std::cin >> m >> d;

    if (f(m, d)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
