#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {

    bool b = true;
    while (b && !s.empty()) {
        b = false;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                s.erase(i, 2);
                b = true;
                break;
            }
        }
    }

    if (s.empty()) {
        s = "Empty String";
    }

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
