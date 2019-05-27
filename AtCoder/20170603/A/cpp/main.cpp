#include <iostream>

using namespace std;

void f(int a, int b) {
    int c = a + b;
    if (c >= 10) {
        cout << "error" << endl;
        return;
    }
    cout << c << endl;
}

int main() {

    int a, b;
    cin >> a >> b;

    f(a, b);

    return 0;
}
