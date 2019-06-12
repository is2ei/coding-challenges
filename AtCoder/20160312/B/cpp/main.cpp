#include <iostream>

int f(int n) {
    if (n & 1) {
        return n + 1;
    }
    return n - 1;
}

int main() {

    int n;
    std::cin >> n;

    int result = f(n);
    std::cout << result << std::endl;

    return 0;
}
