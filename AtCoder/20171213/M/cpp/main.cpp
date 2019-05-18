#include <bits/stdc++.h>

using namespace std;

int f(string s) {
    int result = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            result++;
        } else if (s[i] == '-') {
            result--;
        }
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
