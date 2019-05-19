#include <bits/stdc++.h>

using namespace std;

string f(int n) {
    string result = "";

    for (int i = 0; i < 14; i++) {
        result = (char)((n & 1) + '0') + result;
        n >>= 1;
    }

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        string result = f(n);
        cout << result << endl;
    }

    return 0;
}
