#include <iostream>

using namespace std;

void f(int a, int b, int c) {

    if (a + b >= c) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    f(a, b, c);

    return 0;
}
