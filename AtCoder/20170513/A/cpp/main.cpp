#include <iostream>

using namespace std;

bool f(int a, int b, int c) {
    if (c >= a && c <= b) {
        return true;
    }
    return false;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (f(a, b, c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
