#include <iostream>

using namespace std;

int f(int a, int b) {
    return (a + b) % 24;
}

int main() {

    int a, b;
    cin >> a >> b;

    int result = f(a, b);
    cout << result << endl;

    return 0;
}
