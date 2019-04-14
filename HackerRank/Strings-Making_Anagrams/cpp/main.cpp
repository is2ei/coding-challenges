#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int freq_a[27] = {0};
    for (int i = 0; i < a.size(); i++) {
        freq_a[(int)a.c_str()[i] - 97]++;
    }

    int freq_b[27] = {0};
    for (int i = 0; i < b.size(); i++) {
        freq_b[(int)b.c_str()[i] - 97]++;        
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        int df = freq_a[i] - freq_b[i];
        if (df < 0) {
            df = df * -1;
        }
        count += df;
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
