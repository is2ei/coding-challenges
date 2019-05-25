#include <iostream>

using namespace std;

void f(int a, int b) {
    if ((a & 1) && (b & 1)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {

    int a, b;
    cin >> a >> b;

    f(a, b);

    return 0;
}
