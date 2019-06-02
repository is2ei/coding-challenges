#include <iostream>

int f(int s1, int s2, int s3, int e1, int e2, int e3) {
    int result = 0;
    result += s1 * e1 / 10;
    result += s2 * e2 / 10;
    result += s3 * e3 / 10;
    return result;
}

int main() {
    int s1, s2, s3, e1, e2, e3;
    std::cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

    int result = f(s1, s2, s3, e1, e2, e3);
    std::cout << result << std::endl;

    return 0;
}
