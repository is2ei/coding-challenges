#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {

    string r = s;
    std::reverse(r.begin(), r.end());

    if (s.compare(r) == 0) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < s.size() / 2; i++) {
        int a = (int)s[i];
        int b = (int)r[i];

        if (a < b) {
            count += b - a;
        } else {
            count += a - b;
        }
    }

    return count;
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

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
