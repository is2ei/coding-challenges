#include <iostream>

using namespace std;

int f(int a, int b, int c, int d) {
    int ab = a * b;
    int cd = c * d;
    if (ab > cd) {
        return ab;
    }
    return cd;
}

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int result = f(a, b, c, d);
    cout << result << endl;

    return 0;
}
