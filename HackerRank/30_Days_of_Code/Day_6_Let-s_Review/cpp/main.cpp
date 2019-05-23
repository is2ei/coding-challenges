#include <bits/stdc++.h>

using namespace std;

pair<string, string> f(string s) {

    pair<string, string> result("", "");
    for (int i = 0; i < s.size(); i++) {
        if (i & 1) {
            result.second += s[i];
        } else {
            result.first += s[i];
        }
    }

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        pair<string, string> result = f(s);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
