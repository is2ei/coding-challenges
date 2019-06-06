#include <iostream>
#include <vector>

int f(std::vector<std::vector<int> > a, std::vector<int> b, int c) {

    int result = 0;
    for (int i = 0; i < a.size(); i++) {
        int d = 0;
        for (int j = 0; j < a[i].size(); j++) {
            d += a[i][j] * b[j];
        }
        d += c;
        if (d > 0) {
            result++;
        }
    }
    return result;
}

int main() {

    int n, m, c;
    std::cin >> n >> m >> c;

    std::vector<int> b;
    for (int i = 0; i < m; i++) {
        int tmp;
        std::cin >> tmp;
        b.push_back(tmp);
    }

    std::vector<std::vector<int> > a;
    for (int i = 0; i < n; i++) {
        std::vector<int> aa;
        for (int j = 0; j < m; j++) {
            int tmp;
            std::cin >> tmp;
            aa.push_back(tmp);
        }
        a.push_back(aa);
    }

    int result = f(a, b, c);
    std::cout << result << std::endl;

    return 0;
}
