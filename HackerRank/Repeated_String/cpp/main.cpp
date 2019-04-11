#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long len = s.length();
    long remain_length = n % len;
    long count_a_in_s = 0;
    long sum_count_a_in_s = 0;

    for (long i = 0; i < len; i++) {
        if (s[i] == 'a') {
            count_a_in_s++;

            if (i < remain_length) {
                sum_count_a_in_s++;
            }            
        }
    }

    sum_count_a_in_s += count_a_in_s * (n / len);

    return sum_count_a_in_s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
