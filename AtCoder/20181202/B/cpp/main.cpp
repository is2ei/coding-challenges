#include <iostream>

int f(std::string s) {

    int result = INT_MAX;
    for (int i = 0; i < s.size() - 2; i++) {
        int tmp = (s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + (s[i + 2] - '0');
        if (result > std::abs(753 - tmp)) {
            result = std::abs(753 - tmp);
        }
    }

    return result;
}

int main() {

    std::string s;
    std::cin >> s;

    int result = f(s);
    std::cout << result << std::endl;

    return 0;
}
