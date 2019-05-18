#include <bits/stdc++.h>

using namespace std;

void printResult(int a, int b, int c, string s) {
    cout << a + b + c << " " << s << endl;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    string s;
    cin >> s;

    printResult(a, b, c, s);

    return 0;
}
