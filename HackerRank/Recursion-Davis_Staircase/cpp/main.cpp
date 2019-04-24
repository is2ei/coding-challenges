#include <bits/stdc++.h>

using namespace std;

map<int, unsigned int> m;

// Complete the stepPerms function below.
int stepPerms(int n) {

    if (n == 0) {
        return 1;
    }

    int r = 0;
    for (int i = 1; i <= 3; i++) {
        int tmp = n - i;
        if (tmp < 0) {
            continue;
        }

        if (m.find(tmp) == m.end()) {
            m[tmp] = stepPerms(tmp);
        }
        r += m[tmp];
    }

    return r % 10000000007;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
