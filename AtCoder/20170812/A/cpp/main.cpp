#include <iostream>

using namespace std;

bool f(string n) {
    int a = 0;
    int b = n.size() - 1;
    while (a <= b) {
        if (n[a] != n[b]) {
            return false;
        }
        a++;
        b--;
    }
    return true;
}

int main() {

    string n;
    cin >> n;

    if (f(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
