#include <iostream>

bool f(std::string w) {
    int x = w[0];
    for (int i = 1; i < w.size(); i++) {
        x ^= w[i];
    }
    return x == 0;
}

int main() {

    std::string w;
    std::cin >> w;

    if (f(w)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
