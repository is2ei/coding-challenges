#include <iostream>

using namespace std;

void f(string s) {

    for (int i = 0; i < 5; i++) {
        cout << s[i];
    }
    cout << " ";
    for (int i = 6; i < 13; i++) {
        cout << s[i];
    }
    cout << " ";
    for (int i = 14; i < 19; i++) {
        cout << s[i];
    }
    cout << endl;
}

int main() {

    string s;
    cin >> s;

    f(s);

    return 0;
}
