#include <iostream>

using namespace std;

int f(int a, int b) {
    if (b % a > 0) {
        return b / a + 1;
    }
    return b / a;
}

int main() {

    int a, b;
    cin >> a >> b;

    int result = f(a, b);
    cout << result << endl;

    return 0;
}
