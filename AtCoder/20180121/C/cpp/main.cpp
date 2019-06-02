#include <iostream>
#include <vector>

bool f(std::vector<int> t, std::vector<std::pair<int, int> > p) {

    for (int i = 1; i < t.size(); i++) {
        int distance = std::abs(p[i].first - p[i - 1].first) + std::abs(p[i].second - p[i - 1].second);
        int time = t[i] - t[i - 1];
        if (time == distance) {
            continue;
        }
        if (time < distance) {
            return false;
        }
        if ((time - distance) % 2 != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    int n;
    std::cin >> n;

    std::vector<int> t;
    std::vector<std::pair<int, int> > positions;
    std::pair<int, int> p;
    p.first = 0;
    p.second = 0;
    t.push_back(0);
    positions.push_back(p);
    for (int i = 0; i < n; i++) {
        int tmp;
        std::pair<int, int> p;
        std::cin >> tmp >> p.first >> p.second;
        t.push_back(tmp);
        positions.push_back(p);
    }

    if (f(t, positions)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
