#include <iostream>
#include <vector>

int f(std::vector<std::vector<int> > a) {
    int cnt[50] = {0};
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cnt[a[i][j]]++;
        }
    }

    int result = 0;
    for (int i = 0; i < 50; i++) {
        if (cnt[i] == a.size()) {
            result++;
        }
    }

    return result;
}

int main() {

    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int> > a;
    for (int i = 0; i < n; i++) {
        
        int k;
        std::cin >> k;

        std::vector<int> v;
        for (int j = 0; j < k; j++) {
            int tmp;
            std::cin >> tmp;
            v.push_back(tmp);
        }

        a.push_back(v);
    }

    int result = f(a);
    std::cout << result << std::endl;

    return 0;
}
