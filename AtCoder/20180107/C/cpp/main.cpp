#include <iostream>
#include <vector>

void printResult(std::vector<int>& arr) {
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;
}

std::vector<int> f(int n, int y) {

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (i * 10000 + j * 5000 > y) {
                break;
            }
            if (i * 10000 + j * 5000 + (n - (i + j)) * 1000 == y) {
                std::vector<int> result;
                result.push_back(i);
                result.push_back(j);
                result.push_back(n - (i + j));
                return result;                    
            }
        }
    }

    std::vector<int> result;
    result.push_back(-1);
    result.push_back(-1);
    result.push_back(-1);
    return result;
}

int main() {

    int n, y;
    std::cin >> n >> y;

    std::vector<int> result = f(n, y);
    printResult(result);

    return 0;
}
