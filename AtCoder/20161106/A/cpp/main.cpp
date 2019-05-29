#include <iostream>

using namespace std;

bool f(int a, int b, int c) {
    return a + b == c || a + c == b || b + c == a;
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
