#include <iostream>

int f(int a, int b, int c, int k, int s, int t) {
    int result = (s * a) + (t * b);
    if (s + t >= k) {
        result -= (s + t) * c;
    }
    return result;
}

int main() {

    int a, b, c, k, s, t;
    std::cin >> a >> b >> c >> k >> s >> t;

    int result = f(a, b, c, k, s, t);
    std::cout << result << std::endl;

    return 0;
}
