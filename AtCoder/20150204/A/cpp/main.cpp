#include <iostream>
#include <vector>

std::vector<int> f(int a, int b, int c) {
    std::vector<int> result;
    if (a > b && a > c) {
        result.push_back(1);
        if (b > c) {
            result.push_back(2);
            result.push_back(3);
        } else {
            result.push_back(3);
            result.push_back(2);
        }
    } else if (a < b && a < c) {
        result.push_back(3);
        if (b > c) {
            result.push_back(1);
            result.push_back(2);
        } else {
            result.push_back(2);
            result.push_back(1);
        }
    } else {
        result.push_back(2);
        if (b > c) {
            result.push_back(1);
            result.push_back(3);
        } else {
            result.push_back(3);
            result.push_back(1);
        }
    }
    return result;
}


int main() {

    int a, b, c;
    std::cin >> a >> b >> c;

    std::vector<int> result = f(a, b, c);
    std::cout << result[0] << std::endl;
    std::cout << result[1] << std::endl;
    std::cout << result[2] << std::endl;

    return 0;
}
