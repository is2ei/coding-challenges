#include <iostream>
#include <vector>

std::string f(int t, std::vector<std::pair<int, int> > arr) {
    int min_cost = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].second > t) {
            continue;
        }
        if (min_cost == -1 || min_cost > arr[i].first) {
            min_cost = arr[i].first;
        }
    }

    if (min_cost == -1) {
        return "TLE";
    }

    return std::to_string(min_cost);
}

int main() {

    int n, t;
    std::cin >> n >> t;

    std::vector<std::pair<int, int> > arr;
    for (int i = 0; i < n; i++) {
        std::pair<int, int> p;
        std::cin >> p.first >> p.second;
        arr.push_back(p);
    }

    std::string result = f(t, arr);
    std::cout << result << std::endl;

    return 0;
}
