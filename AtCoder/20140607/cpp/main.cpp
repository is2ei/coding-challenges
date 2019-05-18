#include <bits/stdc++.h>

using namespace std;

string f(string s) {
    return s.append("pp");
}

int main() {

    string s;
    cin >> s;

    string result = f(s);
    cout << result << endl;

    return 0;
}
