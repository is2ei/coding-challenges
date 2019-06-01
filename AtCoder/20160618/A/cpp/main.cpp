#include <iostream>

using namespace std;

int f(int n, int x) {
    return std::min(x - 1, n - x);
}

int main() {

    int n, x;
    cin >> n >> x;

    int result = f(n , x);
    cout << result << endl;

    return 0;
}
