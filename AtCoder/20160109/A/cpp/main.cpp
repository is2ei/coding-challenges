#include <iostream>

using namespace std;

int f(int a, int b, int n) {
    while (n % a != 0 || n % b != 0) {
        n++;
    }
    return n;
}

int main() {

    int a, b, n;
    cin >> a >> b >> n;

    int result = f(a, b, n);
    cout << result << endl;

    return 0;
}
