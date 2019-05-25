#include <iostream>

using namespace std;

int f(int n, int i) {
    return n - i + 1;
}

int main() {

    int n, i;
    cin >> n >> i;

    int result = f(n, i);
    cout << result << endl;

    return 0;
}
