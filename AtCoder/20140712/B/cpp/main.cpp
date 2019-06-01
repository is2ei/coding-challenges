#include <iostream>
#include <sstream>
#include <iomanip>

std::string f(int ss) {

    int mm = ss / 60;
    ss %= 60;

    int hh = mm / 60;
    mm %= 60;

    std::stringstream s;
    s << std::setw(2) << std::setfill('0') << hh;
    s << ":";
    s << std::setw(2) << std::setfill('0') << mm;
    s << ":";
    s << std::setw(2) << std::setfill('0') << ss;

    return s.str();
}

int main() {

    int n;
    std::cin >> n;

    std::string result = f(n);
    std::cout << result << std::endl;

    return 0;
}
