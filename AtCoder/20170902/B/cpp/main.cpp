#include <iostream>

std::string f(std::string s) {
    std::string res = "";
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            res+= s[i];
        }
    }
    return res;
}

int main() {

    std::string s;
    std::cin >> s;

    std::string res = f(s);
    std::cout << res << std::endl;

    return 0;
}
