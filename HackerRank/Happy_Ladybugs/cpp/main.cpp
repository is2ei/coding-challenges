#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {

    bool has_space = false;
    bool has_single = false;
    int arr[26] = {0};
    int tmp_c = b[0];
    int count = 1;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '_') {
            has_space = true;
            continue;
        }

        if (b[i] == tmp_c) {
            count++;
        } else {
            if (count == 1) {
                has_single = true;
            }
            tmp_c = b[i];
            count = 1;
        }

        arr[(int)b[i] - 65]++;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] == 1) {
            return "NO";            
        }
    }

    if (has_single && !has_space) {
        return "NO";
    }

    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
