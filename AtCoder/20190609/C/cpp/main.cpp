#include <iostream>
#include <vector>
#include <set>

long memo[100010] = {0};

long f2(int n, std::set<int>& s) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    if (s.find(n) != s.end()) {
        memo[n] = 0;
    } else {
        memo[n] = (f2(n - 1, s) + f2(n - 2, s)) % 1000000007;
    }
    return memo[n];
}

long f(int n, std::vector<int> a) {

    for (int i = 0; i < 100010; i++) {
        memo[i] = -1;
    }

    std::set<int> s;
    for (int i = 0; i < a.size(); i++) {
        s.insert(a[i]);
    }

    return f2(n, s);
}

int main() {

    int n, m;
    std::cin >> n >> m;

    std::vector<int> a;
    for (int i = 0; i < m; i++) {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    long result = f(n, a);
    std::cout << result << std::endl;

    return 0;
}
