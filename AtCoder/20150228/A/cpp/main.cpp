#include <iostream>

int f(int a, int b, int c) {
    if (a <= b && a >= c) {
        return a;
    }
    if (a <= c && a >= b) {
        return a;
    }
    if (b <= a && b >= c) {
        return b;
    }
    if (b <= c && b >= a) {
        return b;
    }
    return c;
}

int main() {

    int a, b, c;
    std::cin >> a >> b >> c;

    int result = f(a, b, c);
    std::cout << result << std::endl;

    return 0;
}
