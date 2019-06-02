#include <iostream>

int f(int a, int b) {
    int x = 10;
    while (x <= b) {
        x *= 10;
    }
    a *= x;
    return (a + b) * 2;
}

int main() {

    int a, b;
    std::cin >> a >> b;

    int result = f(a, b);
    std::cout << result << std::endl;

    return 0;
}
