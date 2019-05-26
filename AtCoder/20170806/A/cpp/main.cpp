#include <iostream>

using namespace std;

int f(int n, int m) {
    return (n - 1) * (m - 1);
}

int main() {

    int n, m;
    cin >> n >> m;

    int result = f(n, m);
    cout << result << endl;

    return 0;
}
