#include <iostream>

int f(int n, int a, int b) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        int x = i;
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (sum >= a && sum <= b) {
            result += i;
        }
    }
    return result;
}

int main() {

    int n, a, b;
    std::cin >> n >> a >> b;

    int result = f(n, a, b);
    std::cout << result << std::endl;

    return 0;
}
