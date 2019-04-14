#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int count = 0;

    string previous_character = s.substr(0, 1);
    int consecutive_charcters = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s.substr(i, 1) == previous_character) {
            consecutive_charcters++;
        } else {
            count += consecutive_charcters;
            consecutive_charcters = 0;
            previous_character = s.substr(i, 1);
        }
    }

    count += consecutive_charcters;

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

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
