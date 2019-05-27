#include <iostream>

using namespace std;

int f(int a, int b, int c) {
    if (a > b && a > c) {
        return b + c;
    }
    if (b > a && b > c) {
        return a + c;
    }
    return a + b;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int result = f(a, b, c);
    cout << result << endl;

    return 0;
}
