#include <iostream>
#include <vector>

long gcd(long a, long b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

long f(std::vector<int> a) {
    long ans = a[0];
    for (int i = 1; i < a.size(); i++) {
        ans = gcd(ans, a[i]);
    }
    return ans;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        std::cin >> n;

        std::vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            std::cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a);
        std::cout << result << std::endl;
    }

    return 0;
}
