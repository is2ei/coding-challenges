#include <iostream>
#include <vector>

int f(std::vector<int> t) {
    int min = t[0];
    for (int i = 1; i < t.size(); i++) {
        if (min > t[i]) {
            min = t[i];
        }
    }
    return min;
}

int main() {

    int n;
    std::cin >> n;

    std::vector<int> t;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        t.push_back(tmp);
    }

    int result = f(t);
    std::cout << result << std::endl;

    return 0;
}
