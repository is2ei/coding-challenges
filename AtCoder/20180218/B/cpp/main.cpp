#include <iostream>
#include <vector>
#include <queue>

int f(std::vector<int> a) {
    int alice = 0;
    int bob = 0;
    std::priority_queue<int> p;
    for (int i = 0; i < a.size(); i++) {
        p.push(a[i]);
    }
    while (!p.empty()) {
        alice += p.top();
        p.pop();
        if (p.empty()) {
            break;
        }
        bob += p.top();
        p.pop();
    }
    return alice - bob;
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
