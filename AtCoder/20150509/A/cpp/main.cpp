#include <iostream>

int f(int x) {
    return (x / 10) + (x % 10);
}

int main() {

    int x;
    std::cin >> x;

    int result = f(x);
    std::cout << result << std::endl;

    return 0;
}
