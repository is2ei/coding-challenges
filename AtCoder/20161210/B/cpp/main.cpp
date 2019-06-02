#include <iostream>
#include <vector>

void printResult(std::vector<std::vector<char> > arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<char> > f(std::vector<std::vector<char> > c) {
    std::vector<std::vector<char> > result;
    for (int i = 0; i < c.size(); i++) {
        result.push_back(c[i]);
        result.push_back(c[i]);
    }
    return result;
}

int main() {

    int h, w;
    std::cin >> h >> w;

    std::vector<std::vector<char> > c;
    for (int i = 0; i < h; i++) {
        std::vector<char> v;
        for (int j = 0; j < w; j++) {
            char tmp;
            std::cin >> tmp;
            v.push_back(tmp);
        }
        c.push_back(v);
    }

    std::vector<std::vector<char> > result = f(c);
    printResult(result);

    return 0;
}
