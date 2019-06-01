#include <iostream>


int f(int a, int b) {
    int diff = std::abs(a - b);
    return std::min(diff, 10 - diff);
}

int main() {

    int a, b;
    std::cin >> a >> b;

    int result = f(a, b);
    std::cout << result << std::endl;

    return 0;
}
