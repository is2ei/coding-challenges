#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {

    int count_right[s.size()] = {0};
    char c = s[s.size() - 1];
    int tmp = 1;
    for (int i = s.size() - 2; i >= 0; i--) {
        count_right[i + 1] = tmp;
        if (s[i] == c) {
            tmp++;
        } else {
            c = s[i];
            tmp = 1;
        }
    }
    count_right[0] = tmp;

    int count_left[s.size()] = {0};
    c = s[0];
    tmp = 1;
    for (int i = 1; i < s.size(); i++) {
        count_left[i - 1] = tmp;
        if (s[i] == c) {
            tmp++;
        } else {
            c = s[i];
            tmp = 1;
        }
    }
    count_left[s.size() - 1] = tmp;

    long count = 0;

    for (int i = 0; i < s.size(); i++) {

        // All of the characters are the same.
        count += count_right[i];

        if (i == 0 || i + 1 == s.size()) {
            continue;
        }

        int left = i - 1;
        int right = i + 1;

        if (s[i] == s[right] || s[left] != s[right]) {
            continue;
        }

        if (count_left[left] < count_right[right]) {
            count += count_left[left];
        } else {
            count += count_right[right];
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
