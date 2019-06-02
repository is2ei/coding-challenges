#include <iostream>

bool f(std::string s) {
    
    int idx = s.size() - 1;
    while (idx >= 0) {
        if (idx >= 6 && s[idx - 6] == 'd' && s[idx - 5] == 'r' && s[idx - 4] == 'e' && s[idx - 3] == 'a' && s[idx - 2] == 'm' && s[idx - 1] == 'e' && s[idx] == 'r') {
            idx -= 7;
            continue;
        }
        if (idx >= 5 && s[idx - 5] == 'e' && s[idx - 4] == 'r' && s[idx - 3] == 'a' && s[idx - 2] == 's' && s[idx - 1] == 'e' && s[idx] == 'r') {
            idx -= 6;
            continue;
        }
        if (idx >= 4) {
            if (s[idx - 4] == 'd' && s[idx - 3] == 'r' && s[idx - 2] == 'e' && s[idx - 1] == 'a' && s[idx] == 'm') {
                idx -= 5;
                continue;
            }
            if (s[idx - 4] == 'e' && s[idx - 3] == 'r' && s[idx - 2] == 'a' && s[idx - 1] == 's' && s[idx] == 'e') {
                idx -= 5;
                continue;
            }
        }

        return false;
    }

    return true;
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
