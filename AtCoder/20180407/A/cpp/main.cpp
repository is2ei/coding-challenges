#include <iostream>

using namespace std;

bool f(string s) {
    return s[0] != s[1] && s[0] != s[2] && s[1] != s[2];
}

int main() {

    string s;
    cin >> s;

    if (f(s)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
