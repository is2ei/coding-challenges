#include <iostream>
#include <vector>

void f(std::string& s, std::vector<std::pair<int, int> > arr) {
    for (int i = 0; i < arr.size(); i++) {
        while (arr[i].first <= arr[i].second) {
            std::swap(s[arr[i].first], s[arr[i].second]);
            arr[i].first++;
            arr[i].second--;
        }
    }
}

int main() {

    std::string s;
    std::cin >> s;

    int n;
    std::cin >> n;

    std::vector<std::pair<int, int> > arr;
    for (int i = 0; i < n; i++) {
        std::pair<int, int> p;
        std::cin >> p.first >> p.second;
        p.first--;
        p.second--;
        arr.push_back(p);
    }

    f(s, arr);

    std::cout << s << std::endl;

    return 0;
}
