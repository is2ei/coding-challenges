#include <iostream>

using namespace std;

int f(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp % 5 == 0) {
            result++;
            tmp /= 5;
        }
    }
    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        int result = f(n);
        cout << result << endl;
    }

    return 0;
}
