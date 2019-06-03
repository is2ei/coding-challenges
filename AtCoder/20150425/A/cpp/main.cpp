#include <iostream>
#include <vector>

int f(unsigned int w, std::vector<int> a, int s, int t) {
    int result = 0;
    if (w >= s && w <= t) {
        result++;
    }
    for (int i = 0; i < a.size(); i++) {
        w += a[i];
        if (w >= s && w <= t) {
            result++;
        }
    }
    return result;
}

int main() {

    int n, s, t;
    std::cin >> n >> s >> t;

    int w;
    std::cin >> w;

    std::vector<int> a;
    for (int i = 0; i < n - 1; i++) {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    int result = f(w, a, s, t);
    std::cout << result << std::endl;

    return 0;
}
