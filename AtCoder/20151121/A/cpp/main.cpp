#include <iostream>

using namespace std;

int f(int a, int d) {

    if (a < d) {
        return (a + 1) * d;
    }

    return a * (d + 1);
}

int main() {

    int a, d;
    cin >> a >> d;

    int result = f(a, d);
    cout << result << endl;

    return 0;
}
