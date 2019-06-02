#include <iostream>

std::string f(std::string s) {
    std::string result = "";
    result.push_back(s[0]);
    int count = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == result.back()) {
            count++;
        } else {
            result.append(std::to_string(count));
            result += s[i];
            count = 1;
        }
    }
    result.append(std::to_string(count));
    return result;
}

int main() {

    std::string s;
    std::cin >> s;

    std::string result = f(s);
    std::cout << result << std::endl;

    return 0;
}
