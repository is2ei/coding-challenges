#include <bits/stdc++.h>

using namespace std;

string f(int n) {
    if (n % 3 == 0) {
        return "YES";
    }
    while (n) {
        if (n % 10 == 3) {
            return "YES";
        }
        n /= 10;
    }

    return "NO";
}

int main() {

    int n;
    cin >> n;

    string result = f(n);
    cout << result << endl;

    return 0;
}
