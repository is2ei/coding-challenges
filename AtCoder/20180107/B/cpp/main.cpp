#include <iostream>
#include <vector>
#include <set>

int f(std::vector<int> d) {
    std::set<int> s;
    for (int i = 0; i < d.size(); i++) {
        s.insert(d[i]);
    }
    return s.size();
}

int main() {

    int n;
    std::cin >> n;

    std::vector<int> d;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        d.push_back(tmp);
    }

    int result = f(d);
    std::cout << result << std::endl;

    return 0;
}
