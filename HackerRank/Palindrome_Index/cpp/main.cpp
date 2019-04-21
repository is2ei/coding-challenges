#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.
int palindromeIndex(string s) {

    string r = s;
    std::reverse(r.begin(), r.end());
    if (s.compare(r) == 0) {
        return -1;
    }

    for (int i = 0; i < s.size(); i++) {
        int r = s.size() - 1 - i;
        if (s[i] != s[r]) {
            string tmp1 = s;
            tmp1.erase(i, 1);
            string r1 = tmp1;
            std::reverse(r1.begin(), r1.end());
            if (tmp1.compare(r1) == 0) {
                return i;
            }

            string tmp2 = s;
            tmp2.erase(r, 1);
            string r2 = tmp2;
            std::reverse(r2.begin(), r2.end());
            if (tmp2.compare(r2) == 0) {
                return r;
            }
        }
    }

    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
