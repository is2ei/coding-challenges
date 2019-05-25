#include <iostream>

using namespace std;

int f(int a, int b) {
    int add = a + b;
    int sub = a - b;
    int mul = a * b;

    if (add > sub) {
        if (add > mul) {
            return add;
        } else {
            return mul;
        }
    } else {
        if (sub > mul) {
            return sub;
        } else {
            return mul;
        }
    }

    return mul;
}

int main() {

    int a, b;
    cin >> a >> b;

    int result = f(a, b);
    cout << result << endl;

    return 0;
}
