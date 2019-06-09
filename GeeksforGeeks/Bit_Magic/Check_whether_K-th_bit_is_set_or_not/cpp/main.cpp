#include <iostream>

bool f(int n, int k) {
    return (n >> k) & 1;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n, k;
        std::cin >> n >> k;

        if (f(n, k)) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
