#include <iostream>

using namespace std;

bool f(int a, int b, int x) {
    return a <= x && a + b >= x;
}

int main() {

    int a, b, x;
    cin >> a >> b >> x;

    if (f(a, b, x)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
