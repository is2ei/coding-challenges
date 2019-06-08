#include <iostream>

int f(int n, int l, int r) {
    int range = (((1 << (l - 1)) - 1) ^ ((1 << (r)) - 1));
    return n | range;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        
        int n, l, r;
        std::cin >> n >> l >> r;

        int result = f(n, l, r);
        std::cout << result << std::endl;
    }

    return 0;
}
