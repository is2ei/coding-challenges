#include <iostream>

using namespace std;

bool f(int a, int b, int c) {

    if (a == 7 && b == 5 && c == 5) {
        return true;
    }

    if (a == 5 && b == 7 && c == 5) {
        return true;
    }

    if (a == 5 && b == 5 && c == 7) {
        return true;
    }

    return false;
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
