#include <iostream>
#include <algorithm>

int f(std::string s) {

    std::reverse(s.begin(), s.end());

    int odd = 0;
    int even = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            continue;
        }
        if (i & 1) {
            odd++;
        } else {
            even++;
        }
    }

    return std::abs(odd - even) % 3 == 0;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        std::string s;
        std::cin >> s;

        int result = f(s);
        std::cout << result << std::endl;
    }

    return 0;
}
