#include <iostream>
#include <algorithm>
#include <vector>

void printResult(std::vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (i > 0) {
            std::cout << " ";
        }
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

std::vector<int> f(std::vector<int> a) {
    long long int x = 0UL;
    for (int i = 0; i < a.size(); i++) {
        x ^= 1UL << a[i];
    }
    std::vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        if ((x >> a[i] & 1U) == 0) {
            result.push_back(a[i]);
            x ^= 1UL << a[i];
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        std::cin >> n;

        std::vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            std::cin >> tmp;
            a.push_back(tmp);
        }

        std::vector<int> result = f(a);
        printResult(result);
    }

    return 0;
}
