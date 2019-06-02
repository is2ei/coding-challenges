#include <iostream>
#include <vector>

void f(int n) {
    std::cout << n << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << 1 << std::endl;
    }
}

int main() {

    int n;
    std::cin >> n;

    f(n);

    return 0;
}
