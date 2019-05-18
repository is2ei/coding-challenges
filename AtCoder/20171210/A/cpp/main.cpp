#include <bits/stdc++.h>

using namespace std;

int f(string s) {
    int result = 0;
    for (int i = 0; i < s.size(); i++) {
        result += s[i] - '0';
    }
    return result;
}

int main() {

    string s;
    cin >> s;

    int result = f(s);
    cout << result << endl;

    return 0;
}
