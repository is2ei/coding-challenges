#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long memo[500][500] = {0};

long f(long n, int position, vector<long>& c) {

    if (n == 0) {
        return 1;
    }

    long cnt = 0;
    for (int i = position; i < c.size(); i++) {
        long tmp = n - c[i];
        if (tmp < 0) {
            continue;
        }

        if (memo[tmp][i] <= 0) {
            memo[tmp][i] = f(tmp, i, c);
        }
        cnt += memo[tmp][i];
    }

    return cnt;
}


// Complete the getWays function below.
long getWays(long n, vector<long> c) {

    for (int i = 0; i < 500; i++) {
        for (int j = 0; j < 500; j++) {
            memo[i][j] = 0;
        }
    }

    return f(n, 0, c);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<long> c(m);

    for (int i = 0; i < m; i++) {
        long c_item = stol(c_temp[i]);

        c[i] = c_item;
    }

    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'

    long ways = getWays(n, c);

    fout << ways << endl;

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
