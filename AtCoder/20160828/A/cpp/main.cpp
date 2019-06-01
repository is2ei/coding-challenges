#include <iostream>

using namespace std;

int f(int n, int k, int x, int y) {
    if (n <= k) {
        return n * x;
    }
    return k * x + (n - k) * y;
}

int main() {

    int n, k, x, y;
    cin >> n >> k >> x >> y;

    int result = f(n, k, x, y);
    cout << result << endl;

    return 0;
}
