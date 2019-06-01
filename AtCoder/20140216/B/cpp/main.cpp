#include <iostream>
#include <vector>

void printResult(std::vector<std::vector<char>>& c) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j > 0) {
                std::cout << " ";
            }
            std::cout << c[i][j];
        }
        std::cout << std::endl;
    }
}

void f(std::vector<std::vector<char>>& c) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::swap(c[j][i], c[3 - j][3 - i]); 
        }
    }
}

int main() {

    std::vector<std::vector<char>> c;
    for (int i = 0; i < 4; i++) {
        std::vector<char> v;
        for (int j = 0; j < 4; j++) {
            char tmp;
            std::cin >> tmp;
            v.push_back(tmp);
        }
        c.push_back(v);
    }

    f(c);

    printResult(c);

    return 0;
}
