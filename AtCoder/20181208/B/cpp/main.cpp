#include <iostream>
#include <vector>

int f(std::vector<int> p) {
    int largest = -1;

    for (int i = 0; i < p.size(); i++) {
        if (largest < p[i]) {
            largest = p[i];
        }
    }

    int result = 0;
    for (int i = 0; i < p.size(); i++) {
        if (largest == p[i]) {
            result += p[i] / 2;
            largest = -1;
        } else {
            result += p[i];
        }
    }

    return result;
}

int main() {

    int n;
    std::cin >> n;

    std::vector<int> p;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        p.push_back(tmp);
    }

    int result = f(p);
    std::cout << result << std::endl;

    return 0;
}
