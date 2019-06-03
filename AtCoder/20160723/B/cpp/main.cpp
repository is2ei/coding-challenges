#include <iostream>
#include <vector>

std::string f(std::vector<std::string> s) {
    std::sort(s.begin(), s.end());
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        result.append(s[i]);
    }
    return result;
}

int main() {

    int n, l;
    std::cin >> n >> l;

    std::vector<std::string> s;
    for (int i = 0; i < n; i++) {
        std::string tmp;
        std::cin >> tmp;
        s.push_back(tmp);
    }

    std::string result = f(s);
    std::cout << result << std::endl;

    return 0;
}
