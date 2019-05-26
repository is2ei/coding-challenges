#include <iostream>

using namespace std;

string f (string s) {
    s[3] = '8';
    return s;
}

int main() {

    string s;
    cin >> s;

    string result = f(s);
    cout << result << endl;

    return 0;
}
