#include <iostream>

using namespace std;

int f(int a, int b) {
    return (a - 1) * (b - 1);
}

int main() {

    int a, b;
    cin >> a >> b;

    int result = f(a, b);
    cout << result << endl;

    return 0;
}
