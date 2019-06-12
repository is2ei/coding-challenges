#include <iostream>

int f(int a, int b, int c) {
    if (a != b) {
        if (a != c) {
            return a;
        } else {
            return b;
        }
    }
    return c;
}

int main() {

    int a, b, c;
    std::cin >> a >> b >> c;

    int res = f(a, b, c);
    std::cout << res << std::endl;

    return 0;
}
