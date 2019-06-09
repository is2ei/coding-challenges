#include <iostream>
#include <vector>

int f(std::vector<int> w) {
    int l = 0;
    int r = w.size() - 1;

    int sum_l = w[l];
    int sum_r = w[r];
    while (l + 1 < r) {
        if (sum_l <= sum_r) {
            l++;
            sum_l += w[l];
        } else {
            r--;
            sum_r += w[r];
        }
    }
    return std::abs(sum_l - sum_r);
}

int main() {

    int n;
    std::cin >> n;

    std::vector<int> w;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        w.push_back(tmp);
    }

    int result = f(w);
    std::cout << result << std::endl;

    return 0;
}
