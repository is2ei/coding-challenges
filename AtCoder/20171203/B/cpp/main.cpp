#include <bits/stdc++.h>

using namespace std;

string f(int n) {
    int a = n;
    int b = 0;
    while (a) {
        b += a % 10;
        a /= 10;
    }

    if (n % b == 0) {
        return "Yes";
    }

    return "No";
}

int main() {

    int n;
    cin >> n;

    string result = f(n);
    cout << result << endl;

    return 0;
}
