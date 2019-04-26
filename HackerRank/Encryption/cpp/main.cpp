#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {

    int x, y;
    for (int i = 0; i < s.size(); i++) {
        if (i * i == s.size()) {
            y = i;
            x = i;
            break;
        }
        if (i * i < s.size() && s.size() < (i + 1) * (i + 1)) {
            y = i;
            x = i + 1;
            break;
        }
    }

    vector<string> v;
    for (int i = 0; i < s.size(); i += x) {
        string tmp = s.substr(i, x);
        v.push_back(tmp);
    }

    string result = "";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < v.size(); j++) {
            if (i < v[j].size()) {
                result += v[j][i];
            }
        }

        if (i < y) {
            result += ' ';
        }
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
