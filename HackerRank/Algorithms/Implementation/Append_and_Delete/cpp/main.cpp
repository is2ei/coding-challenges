#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {

    if (s.compare(t) == 0) {
        return "Yes";
    }

    bool same_char = true;
    char c = s[0];
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != c) {
            same_char = false;
        }
    }
    for (int i = 0; i < t.size(); i++) {
        if (t[i] != c) {
            same_char = false;
        }
    }
    if (same_char == true) {
        return "Yes";
    }

    int i = 0;
    while (i < s.size() && i < t.size()) {
        if (s[i] != t[i]) {
            break;
        }
        i++;
    }

    if ( (s.size() - i) + (t.size() - i) == k) {
        return "Yes";
    }

    if (s.size() + t.size() < k) {
        return "Yes";
    }

    return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
