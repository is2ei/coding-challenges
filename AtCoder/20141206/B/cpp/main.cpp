#include <iostream>

char f(int a, int b, int c) {
    if (a + b == c && a - b == c) {
        return '?';
    }
    if (a + b == c) {
        return '+';
    }
    if (a - b == c) {
        return '-';
    }
    return '!';
}

int main() {

    int a, b, c;
    std::cin >> a >> b >> c;

    char result = f(a, b, c);
    std::cout << result << std::endl;

    return 0;
}
