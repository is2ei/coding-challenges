#include <iostream>

using namespace std;

int f(int a, int b, int c) {
    if (a == b && a == c) {
        return 1;
    }
    if (a == b || a == c || b == c) {
        return 2;
    }
    return 3;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int result = f(a, b, c);
    cout << result << endl;

    return 0;
}
