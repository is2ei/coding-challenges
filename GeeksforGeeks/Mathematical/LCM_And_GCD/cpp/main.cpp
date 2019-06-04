#include <iostream>

int gcd(long a, long b) {
    if (b == 0) {
        return a;
    }
    int t = b;
    b = a % b;
    a = t;
    return gcd(a, b);
}


std::pair<long, long> f(long a, long b) {

    std::pair<long, long> p;

    p.second = gcd(a, b);

    p.first = (a * b) / p.second;

    return p;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        
        int a, b;
        std::cin >> a >> b;

        std::pair<long, long> result = f(a, b);
        std::cout << result.first << " " << result.second << std::endl;
    }

    return 0;
}
