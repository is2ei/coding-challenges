#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int freq_alpha[27] = {0};
    for (int i = 0; i < s.size(); i++) {
        freq_alpha[(int)s.c_str()[i] - 97]++;
    }

    int a = -1;
    bool f = false;
    for (int i = 0; i < 26; i++) {
        if (freq_alpha[i] > 0) {
            if (a == -1) {
                a = freq_alpha[i];
            }

            if (a != freq_alpha[i]) {
                if (f) {
                    return "NO";
                } else {
                    f =  true;
                }
            }
        }
    }

    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
