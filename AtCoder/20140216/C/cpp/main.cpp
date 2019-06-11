#include <iostream>
#include <vector>

std::vector<int> f(int n) {

    std::vector<int> res;
    for (int i = 1; i <= 6; i++) {
        res.push_back(i);
    }

    n %= 30;

    for (int i = 0; i < n; i++) {
        std::swap(res[i % 5], res[i % 5 + 1]);
    }

    return res;
}


int main() {

    int n;
    std::cin >> n;

    std::vector<int> res = f(n);
    std::cout << res[0] << res[1] << res[2] << res[3] << res[4] << res[5] << std::endl;

    return 0;
}
