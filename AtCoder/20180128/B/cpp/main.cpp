#include <iostream>

int memo[100][100][100][100] = {0};

int f(int a, int b, int c, int x) {
    int result = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if ((i * 500) + (j * 100) + (k * 50) == x) {
                    result++;
                }
            }
        }
    }
    return result;
}

int main() {

    int a, b, c, x;
    std::cin >> a >> b >> c >> x;

    int result = f(a, b, c, x);
    std::cout << result << std::endl;

    return 0;
}
