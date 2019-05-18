#include <bits/stdc++.h>

using namespace std;

string f(int a, int b, int c, int d) {

    if (a + b > c + d) {
        return "Left";
    } else if (a + b < c + d) {
        return "Right";
    }

    return "Balanced";
}

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string result = f(a, b, c, d);
    cout << result << endl;

    return 0;
}
