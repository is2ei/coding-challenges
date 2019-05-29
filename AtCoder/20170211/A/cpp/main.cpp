#include <iostream>

using namespace std;

int f(int a, int b) {
    if (a == 1) {
        if (b == 1) {
            return 0;
        } else {
            return 1;
        }
    } else if (b == 1) {
        return -1;
    }
    if (a > b) {
        return 1;
    }
    if (a < b) {
        return -1;
    }
    return 0;
}

int main() {

    int a, b;
    cin >> a >> b;

    int result = f(a, b);

    if (result == 1) {
        cout << "Alice" << endl;
    } else if (result == -1) {
        cout << "Bob" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}
