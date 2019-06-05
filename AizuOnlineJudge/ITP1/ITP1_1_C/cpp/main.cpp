#include <iostream>

std::pair<int, int> f(int a, int b) {
    std::pair<int, int> p;
    p.first = a * b;
    p.second = (a + b) * 2;
    return p;
}

int main() {

    int a, b;
    std::cin >> a >> b;

    std::pair<int, int> result = f(a, b);
    std::cout << result.first << " " << result.second << std::endl;

    return 0;
}
