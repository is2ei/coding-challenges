#include <iostream>

bool f(std::string x) {
    if (x.empty()) {
        return true;
    }
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == 'o' || x[i] == 'k' || x[i] == 'u') {
            continue;
        }
        if (x[i] == 'c' && i < x.size() - 1 && x[i + 1] == 'h') {
            i++;
            continue;
        }
        return false;
    }
    return true;
}

int main() {

    std::string x;
    std::cin >> x;

    if (f(x)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
