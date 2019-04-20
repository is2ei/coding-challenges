#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
int alternate(string s) {

    map<char, bool> m;
    for (int i = 0; i < s.size(); i++) {
        m[s[i]] = true;
    }

    int max = 0;
    for (int i = 0; i < 26; i++) {
        int a = i + 97;
        char ac = (char)a;
        if (m.find(ac) == m.end()) {
            continue;
        }

        for (int j = i + 1; j < 26; j++) {
            int b = j + 97;
            char bc = (char)b;

            if (m.find(bc) == m.end()) {
                continue;
            }

            int count = 0;
            bool is_start = false;
            bool is_a = false;
            for (int k = 0; k < s.size(); k++) {
                if (s[k] == ac) {
                    if (is_start && is_a) {
                        count = 0;
                        break;
                    }
                    is_a = true;
                    is_start = true;
                    count++;
                    continue;
                }

                if (s[k] == bc) {
                    if (is_start && !is_a) {
                        count = 0;
                        break;
                    }
                    is_a = false;
                    is_start = true;
                    count++;
                    continue;
                }
            }

            if (max < count) {
                max = count;
            }
        }
    }

    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
