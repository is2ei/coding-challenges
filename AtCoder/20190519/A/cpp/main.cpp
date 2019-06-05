#include <iostream>

void f(std::string& s , int k) {
    s[k - 1] ^= 32;
}

int main() {

    int n, k;
    std::cin >> n >> k;

    std::string s;
    std::cin >> s;

    f(s, k);

    std::cout << s << std::endl;

    return 0;
}
