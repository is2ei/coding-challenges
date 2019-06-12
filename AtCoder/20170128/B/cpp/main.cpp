#include <iostream>

int f(std::string s) {
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
        if (s[l] != 'A') {
            l++;
        }
        if (s[r] != 'Z') {
            r--;
        }
        if (s[l] == 'A' && s[r] == 'Z') {
            break;
        }
    }
    return r - l + 1;
}

int main() {

    std::string s;
    std::cin >> s;

    int res = f(s);
    std::cout << res << std::endl;

    return 0;
}
