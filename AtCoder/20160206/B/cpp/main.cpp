#include <iostream>
#include <vector>

std::string f(std::vector<std::string> s, std::vector<int> p) {

    int sm = 0;
    for (int i = 0; i < p.size(); i++) {
        sm += p[i];
    }
    for (int i = 0; i < p.size(); i++) {
        if (p[i] * 2 > sm) {
            return s[i];
        }
    }

    return "atcoder";
}

int main() {

    int n;
    std::cin >> n;

    std::vector<std::string> s;
    std::vector<int> p;
    for (int i = 0; i < n; i++) {
        std::string tmp_s;
        std::cin >> tmp_s;
        s.push_back(tmp_s);
        int tmp_i;
        std::cin >> tmp_i;
        p.push_back(tmp_i);
    }

    std::string result = f(s, p);
    std::cout << result << std::endl;

    return 0;
}
