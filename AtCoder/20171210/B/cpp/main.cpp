#include <iostream>
#include <vector>

int f(std::vector<int> a) {
    int min = -1;
    for (int i = 0; i < a.size(); i++) {
        int count = 0;
        while (a[i] % 2 == 0 && (min == -1 || min >= count)) {
            a[i] /= 2;
            count++;
        }
        if (min == -1 || min > count) {
            min = count;
        }
    }
    return min;
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
