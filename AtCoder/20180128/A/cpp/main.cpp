#include <iostream>

int f(int x, int a, int b) {
    return (x - a) % b;
}

int main() {

    int x, a, b;
    std::cin >> x >> a >> b;

    int result = f(x, a, b);
    std::cout << result << std::endl;

    return 0;
}
