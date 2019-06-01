#include <iostream>

using namespace std;

int f(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}

int main() {

    int n;
    cin >> n;

    int result = f(n);
    cout << result << endl;

    return 0;
}
