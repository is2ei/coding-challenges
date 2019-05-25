#include <iostream>

using namespace std;

string f(string n) {
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '1') {
            n[i] = '9';
        } else if (n[i] == '9') {
            n[i] = '1';
        }
    }
    return n;
}

int main() {

    string n;
    cin >> n;

    string result = f(n);
    cout << result << endl;

    return 0;
}
