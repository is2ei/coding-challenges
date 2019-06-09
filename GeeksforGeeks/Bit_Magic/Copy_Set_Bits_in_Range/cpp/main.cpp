#include <iostream>
#include <bitset>

int f(long x, long l, long r, long y) {
    long mask = ((1UL << (r - l + 1UL)) - 1UL) << (l - 1UL) & y;
    return x | mask;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        long x, l, r, y;
        std::cin >> x >> l >> r >> y;

        long result = f(x, l, r, y);
        std::cout << result << std::endl;
    }

    return 0;
}
