#include <iostream>

int f(int n) {
    return 180 * (n - 2);
}

int main() {

    int n;
    std::cin >> n;

    int result = f(n);
    std::cout << result << std::endl;

    return 0;
}
