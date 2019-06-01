#include <iostream>

bool f(std::string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o') {
            count++;
        }
    }
    return (8 - count) <= (15 - s.size()) ;
}

int main() {

    std::string s;
    std::cin >> s;

    if (f(s)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
