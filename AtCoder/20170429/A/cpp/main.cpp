#include <iostream>

using namespace std;

bool f(string a, string b, string c) {
    if (a[a.size() - 1] != b[0]) {
        return false;
    }
    if (b[b.size() - 1] != c[0]) {
        return false;
    }
    return true;
}

int main() {

    string a, b, c;
    cin >> a >> b >> c;

    if (f(a, b, c)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
