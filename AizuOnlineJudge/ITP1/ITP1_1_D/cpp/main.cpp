#include <iostream>
#include <sstream>

std::string f(int S) {

    int s = S % 60;
    int m = S / 60;
    int h = m / 60;
    m = m % 60;

    std::stringstream ss;
    ss << h << ":" << m << ":" << s;
    return ss.str();
}

int main() {

    int S;
    std::cin >> S;

    std::string result = f(S);
    std::cout << result << std::endl;

    return 0;
}
