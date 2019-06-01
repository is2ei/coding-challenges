#include <iostream>

using namespace std;

string f(string n) {
    if (n[0] == n[1] && n[0] == n[2] && n[0] == n[3]) {
        return "SAME";
    }
    return "DIFFERENT";
}

int main() {

    string n;
    cin >> n;

    string result = f(n);
    cout << result << endl;

    return 0;
}
