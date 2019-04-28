#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

unsigned long long f(unsigned long long t1, unsigned long long t2, int n, int count) {
    if (count + 1 == n) {
        return t1;
    }

    unsigned long long tmp = t1 + t2 * t2;
    return f(t2, tmp, n, count + 1);
}

// Complete the fibonacciModified function below.
unsigned long long fibonacciModified(unsigned long long t1, unsigned long long t2, int n) {
    return f(t1, t2, n, 0);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t1T2n_temp;
    getline(cin, t1T2n_temp);

    vector<string> t1T2n = split_string(t1T2n_temp);

    unsigned long long t1 = stoi(t1T2n[0]);

    unsigned long long t2 = stoi(t1T2n[1]);

    int n = stoi(t1T2n[2]);

    unsigned long long result = fibonacciModified(t1, t2, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
