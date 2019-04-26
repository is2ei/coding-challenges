#include <bits/stdc++.h>

using namespace std;

void trim(string& s) {
    if (s[0] == ' ') {
        s.erase(0, 1);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int q;
    cin >> q;

    string s = "";
    std::stack<string> history;
    for (int i = 0; i < q; i++) {
        
        int op;
        cin >> op;

        if (op == 1) {
            history.push(s);
            string val;
            getline(cin, val);
            trim(val);
            s.append(val);
        } else if (op == 2) {
            history.push(s);
            int val;
            cin >> val;
            while (val > 0) {
                s.erase(s.size() - 1, 1);
                val--;
            }
        } else if (op == 3) {
            int val;
            cin >> val;
            cout << s[val - 1] << endl;
        } else if (op == 4) {
            s = history.top();
            history.pop();
        }
    }

    return 0;
}
