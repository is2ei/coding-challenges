#include <iostream>

int f(int k) {

    if (k == 1) {
        return 2;
    }

    if (((k + 1) & k) == 0) {
        return k / 2;
    }

    return -1;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        
        int k;
        std::cin >> k;

        int result = f(k);
        std::cout << result << std::endl;
    }

    return 0;
}
