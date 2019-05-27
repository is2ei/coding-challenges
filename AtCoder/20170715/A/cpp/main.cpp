#include <iostream>

using namespace std;

bool f(int a, int b) {
    if (a % 3 == 0) {
        return true;
    }
    if (b % 3 == 0) {
        return true;
    }
    if ((a + b) % 3 == 0) {
        return true;
    }
    return false;
}

int main() {

    int a, b;
    cin >> a >> b;

    if (f(a, b)) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
