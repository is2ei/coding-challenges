#include <iostream>

using namespace std;

int f(int a, int b, int h) {
    return (a + b) * h / 2;
}

int main() {

    int a, b, h;
    cin >> a >> b >> h;

    int result = f(a, b, h);
    cout << result << endl;

    return 0;
}
