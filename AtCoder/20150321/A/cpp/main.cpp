#include <iostream>

std::string f(int q) {
    if (q == 1) {
        return "ABC";
    }
    return "chokudai";
}

int main() {

    int q;
    std::cin >> q;

    std::string result = f(q);
    std::cout << result << std::endl;

    return 0;
}
