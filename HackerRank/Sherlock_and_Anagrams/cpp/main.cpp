#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    int count = 0;
    map<string, int> m;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 1; j + i <= s.size(); j++) {
            string substring = s.substr(i, j);
            sort(substring.begin(), substring.end());

            if (m.find(substring) != m.end()) {
                m[substring]++;
            } else {
                m[substring] = 1;
            }
        }
    }

    for (auto const& e: m) {
        if (e.second == 1) {
            continue;
        }

        if (e.second == 2) {
            count++;
            continue;
        }

        if (e.second == 3) {
            count += 3;
            continue;
        }

        int a = 1;
        a *= e.second;
        a *= e.second - 1;
        a /= 2;

        count += a;
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

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
