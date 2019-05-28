#include <iostream>

using namespace std;

bool f(int a, int b, int c) {
    return b - a == c - b;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (f(a, b, c)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
