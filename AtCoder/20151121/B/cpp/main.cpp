#include <iostream>
#include <vector>

void printResult(std::vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    }
}

std::vector<int> f(int l, int h, std::vector<int> a) {
    
    std::vector<int> res;
    int x = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < l) {
            res.push_back(l - a[i]);
        } else if (a[i] > h) {
            res.push_back(-1);
        } else {
            res.push_back(0);
        }
    }

    return res;
}

int main() {

    int l, h;
    std::cin >> l >> h;

    int n;
    std::cin >> n;

    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    std::vector<int> res = f(l, h, a);
    printResult(res);

    return 0;
}
