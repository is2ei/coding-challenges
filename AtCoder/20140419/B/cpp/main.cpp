#include <iostream>

std::string f(std::string a) {
    std::string result = "";
    if (a.size() == 1) {
        if (a[0] == 'a') {
            return "-1";
        }
        result += (char)(a[0] - 1);
    }

    for (int i = 0; i < a.size() - 1; i++) {
        result += a[i];
    }
    return result;
}

int main() {

    std::string a;
    std::cin >> a;

    std::string result = f(a);
    std::cout << result << std::endl;

    return 0;
}
