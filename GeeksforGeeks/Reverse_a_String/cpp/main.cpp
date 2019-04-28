#include <bits/stdc++.h>

using namespace std;

string f(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++) {

        string s;
        getline(cin, s);

        string result = f(s);
        cout << result << endl;
    }

    return 0;
}
