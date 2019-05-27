#include <iostream>

using namespace std;

string f(int x, int a, int b) {
    if (a >= b) {
        return "delicious";
    }
    if (a + x >= b) {
        return "safe";
    }
    return "dangerous";
}

int main() {

    int x, a, b;
    cin >> x >> a >> b;

    string result = f(x, a, b);
    cout << result << endl;

    return 0;
}
