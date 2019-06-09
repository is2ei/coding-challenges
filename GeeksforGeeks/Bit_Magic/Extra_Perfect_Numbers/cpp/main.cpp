#include <iostream>

int f(int n) {
    int count = 1;
    int x = 1;
    while (x <= n) {
        x <<= 1;
        if (x + 1 <= n) {
            count++;
        }
    }
    return count;
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
