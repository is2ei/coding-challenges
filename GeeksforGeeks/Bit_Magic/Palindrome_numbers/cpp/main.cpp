#include <iostream>
#include <bitset>

int f(long n) {

    long l = 1;
    for (long i = n; i > 1; i = n >> ++l);
    
    long r = 0;

    while (r <= l) {
        if ( (n >> l & 1) != (n >> r & 1) ) {
            return 0;
        }
        l--;
        r++;
    }

    return 1;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        long n;
        std::cin >> n;

        int result = f(n);
        std::cout << result << std::endl;
    }

    return 0;
}
