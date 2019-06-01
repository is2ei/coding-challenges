#include <iostream>
#include <vector>

int f(std::vector<int> a) {
    int result = 0;
    for (int i = 0; i < a.size(); i++) {
        while (a[i] % 2 == 0 || a[i] % 3 == 2) {
            a[i]--;
            result++;
        }
    }
    return result;
}

int main() {

    int n;
    std::cin >> n;

    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    int result = f(a);
    std::cout << result << std::endl;

    return 0;
}
