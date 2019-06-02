#include <iostream>

int f(int a, int b) {
    if (a % b == 0) {
        return 0;
    }
    return b - (a % b);
}

int main() {

    int a, b;
    std::cin >> a >> b;

    int result = f(a, b);
    std::cout << result << std::endl;

    return 0;
}
