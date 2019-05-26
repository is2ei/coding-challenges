#include <iostream>

using namespace std;

int f(int a, int b, int t) {
    return b * (t / a);
}

int main() {

    int a, b, t;
    cin >> a >> b >> t;

    int result = f(a, b, t);
    cout << result << endl;

    return 0;
}
