#include <iostream>
#include <vector>
#include <climits>

int f(std::vector<int> a) {

    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < a.size(); i++) {
        if (first < a[i]) {
            second = first;
            first = a[i];
        } else if (first > a[i] && second < a[i]) {
            second = a[i];
        }
    }
    return second;
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
