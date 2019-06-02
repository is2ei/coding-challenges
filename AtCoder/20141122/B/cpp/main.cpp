#include <iostream>
#include <vector>

int f(std::vector<int> a) {
    int deno = 0;
    int nume = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 0) {
            continue;
        }
        nume += a[i];
        deno += 1;
    }

    int result = nume * 10 / deno;
    if (result % 10 > 0) {
        result += 10;
    }
    return result / 10;
}

int main() {

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

    return 0;
}
