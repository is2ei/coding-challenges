#include <iostream>

void f(std::string& s) {
    if (s[0] >= 97) {
        s[0] = s[0] - 32;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] < 97) {
            s[i] = s[i] + 32;
        }
    }
}

int main() {

    std::string s;
    std::cin >> s;

    f(s);
    std::cout << s << std::endl;

    return 0;
}
