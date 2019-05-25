#include <iostream>

using namespace std;

int f(int n) {
    if (n & 1) {
        return n * 2;
    }
    return n;
}

int main() {

    int n;
    cin >> n;

    int result = f(n);
    cout << result << endl;

    return 0;
}
