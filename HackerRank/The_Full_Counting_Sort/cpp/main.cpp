#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    queue<string> count[101];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cin.ignore(numeric_limits<streamsize>::max(), ' ');

        string s;
        getline(cin, s);

        if (i < n / 2) {
            count[x].push("-");
        } else {
            count[x].push(s);
        }
    }

    for (int i = 0; i < 101; i++) {
        while (!count[i].empty()) {
            cout << count[i].front() << " ";
            count[i].pop();
        }
    }

    return 0;
}
