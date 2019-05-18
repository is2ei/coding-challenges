#include <bits/stdc++.h>

using namespace std;

string f(string n) {

    if (n[0] == n[1] && n[0] == n[2]) {
        return "Yes";
    }

    if (n[1] == n[2] && n[1] == n[3]) {
        return "Yes";
    }

    if (n[0] == n[1] && n[0] == n[2] && n[1] == n[3]) {
        return "Yes";
    }

    return "No";
}

int main() {

    string n;
    cin >> n;

    string result = f(n);
    cout << result << endl;

    return 0;
}
