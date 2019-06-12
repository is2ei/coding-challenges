#include <iostream>
#include <vector>
#include <queue>

int f(int k, std::vector<int> l) {
    std::priority_queue<int> q;
    for (int i = 0; i < l.size(); i++) {
        q.push(l[i]);
    }

    int res = 0;
    while (k--) {
        res += q.top();
        q.pop();
    }

    return res;
}

int main() {

    int n, k;
    std::cin >> n >> k;

    std::vector<int> l;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        l.push_back(tmp);
    }

    int res = f(k, l);
    std::cout << res << std::endl;

    return 0;
}
