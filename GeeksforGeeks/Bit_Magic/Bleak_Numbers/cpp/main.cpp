#include <iostream>

int f2(int x) {
    int count = 0;
    while (x > 0) {
        x &= x - 1;
        count++;
    }
    return count;
}

int f(int n) {

    for (int i = 1; i <= n; i++) {
        if (i + f2(i) == n) {
            return 0;
        }
    }

    return 1;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        std::cin >> n;

        int result = f(n);
        std::cout << result << std::endl;
    }

    return 0;
}
