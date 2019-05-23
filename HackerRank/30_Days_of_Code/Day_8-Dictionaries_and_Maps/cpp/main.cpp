#include <bits/stdc++.h>

using namespace std;

void f(map<string, string> m) {
    string s;
    while (cin >> s) {
        if (m.find(s) != m.end()) {
            cout << s << "=" << m[s] << endl;
        } else {
            cout << "Not found\n";
        }
    }
}

int main() {

    int t;
    cin >> t;

    std::map<string, string> m;
    for (int i = 0; i < t; i++) {
        string name;
        cin >> name;

        string phoneNumber;
        cin >> phoneNumber;

        m[name] = phoneNumber;
    }

    f(m);

    return 0;
}
