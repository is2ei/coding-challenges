#include <iostream>
#include <map>
#include <vector>

std::string f(std::vector<std::string> s) {
    std::map<std::string, int> m;
    for (int i = 0; i < s.size(); i++) {
        if (m.find(s[i]) != m.end()) {
            m[s[i]]++;
        } else {
            m[s[i]] = 1;
        }
    }
    std::string result = s[0];
    int max = m[result];
    for (auto const& e: m) {
        if (max < e.second) {
            result = e.first;
            max = e.second;
        }
    }

    return result;
}

int main() {

    int n;
    std::cin >> n;

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
