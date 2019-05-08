#include <bits/stdc++.h>

using namespace std;

int f(string s) {

    int count[30] = {0};
    for (int i = 0; i < s.size(); i++) {
        count[(int)s[i] - 97]++;
    }

    int max = INT_MIN;
    for (int i = 0; i < 30; i++) {
        if (max < count[i]) {
            max = count[i];
        }
    }

    return s.size() - max >= max;
}

int main() {

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++) {

        string s;
        getline(cin, s);

        int result = f(s);
        cout << result << endl;
    }

    return 0;
}
