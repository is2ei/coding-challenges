#include <iostream>

using namespace std;

int f(int a, int b, int c) {
    return (a * b * 2) + (a * c * 2) + (b * c * 2);
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int result = f(a, b, c);
    cout << result << endl;

    return 0;
}
