#include <bits/stdc++.h>

using namespace std;

string f(string a, string b) {
    if (a.size() > b.size()) {
        return a;
    }
    return b;
}

int main() {

    string a, b;
    cin >> a >> b;

    string result = f(a, b);
    cout << result << endl;

    return 0;
}
