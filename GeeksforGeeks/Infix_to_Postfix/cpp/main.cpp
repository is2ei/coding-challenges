#include <bits/stdc++.h>

using namespace std;

string f(string s) {

    stack<char> stck;
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            if (!stck.empty()) {
                if (s[i] == '*' || s[i] == '/') {
                    if (stck.top() == '*' || stck.top() == '/') {
                        result += stck.top();
                        stck.pop();
                    }
                } else if(s[i] == '+' || s[i] == '-') {
                    while (!stck.empty() && stck.top() != '(') {
                        result += stck.top();
                        stck.pop();
                    }
                }
            }
            stck.push(s[i]);
        } else if (s[i] == '(') {
            stck.push(s[i]);
        } else if (s[i] == ')') {
            while (!stck.empty()) {
                if (stck.top() == '(') {
                    stck.pop();
                    break;
                }
                result += stck.top();
                stck.pop();
            }
        } else {
            result += s[i];
        }
    }

    while (!stck.empty()) {
        result += stck.top();
        stck.pop();
    }

    return result;
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