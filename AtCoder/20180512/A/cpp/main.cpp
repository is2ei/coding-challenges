#include <iostream>

using namespace std;

bool f(int a, int b, int c, int d) {
    return abs(a - c) <= d || (abs(a - b) <= d && abs(b - c) <= d);
}

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (f(a, b, c, d)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
