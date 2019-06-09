#include <iostream>

bool f(int n) {
    return n & (n << 1);
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        std::cin >> n;

        if (f(n)) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
