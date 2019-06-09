#include <iostream>

int f(int n, int k) {
    return (n >> (k - 1)) & 1;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n, k;
        std::cin >> n >> k;

        int result = f(n, k);
        std::cout << result << std::endl;
    }

    return 0;
}
