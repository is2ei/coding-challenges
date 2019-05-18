#include <bits/stdc++.h>

using namespace std;

string f(string s) {
    if (s.back() == 'T') {
        return "YES";
    }
    return "NO";
}

int main() {

    string s;
    cin >> s;

    string result = f(s);
    cout << result << endl;

    return 0;
}
