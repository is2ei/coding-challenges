#include <iostream>

int f(int p, int q, int r) {
    return std::min(std::min(p + q, q + r), r + p);
}

int main() {

    int p, q, r;
    std::cin >> p >> q >> r;

    int result = f(p, q, r);
    std::cout << result << std::endl;

    return 0;
}
