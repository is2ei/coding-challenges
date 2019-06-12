#include <iostream>

bool f(int h1, int w1, int h2, int w2) {
    return h1 == h2 || h1 == w2 || w1 == h2 || w1 == w2;
}

int main() {

    int h1, w1;
    std::cin >> h1 >> w1;
    int h2, w2;
    std::cin >> h2 >> w2;

    if (f(h1, w1, h2, w2)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
