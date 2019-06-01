#include <iostream>

bool f(char c) {
    return c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r';
}

std::string f(std::string s, std::string t) {

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[i]) {
            continue;
        }
        if (s[i] == '@' && f(t[i])) {
            continue;
        }
        if (t[i] == '@' && f(s[i])) {
            continue;
        }
        return "You will lose";
    }

    return "You can win";
}

int main() {

    std::string s;
    std::string t;
    std::cin >> s >> t;

    std::string result = f(s, t);
    std::cout << result << std::endl;

    return 0; 
}
