#include <iostream>

bool f(int n) {
    return n / 10 == 9 || n % 10 == 9;
}

int main() {

    int n;
    std::cin >> n;

    if (f(n)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
