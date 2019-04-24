#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long memo[500][500] = {0};

long f(int n, int position, vector<int>& coins) {

    if (n == 0) {
        return 1;
    }

    long cnt = 0;
    for (int i = position; i < coins.size(); i++) {

        long tmp = n - coins[i];
        if (tmp < 0) {
            continue;
        }

        if (memo[tmp][i] <= 0) {
            memo[tmp][i] = f(tmp, i, coins);
        }

        cnt += memo[tmp][i];
    }

    return cnt;
}

// Complete the ways function below.
long ways(int n, vector<int> coins) {

    for (int i = 0; i < 500; i++) {
        for (int j = 0; j < 500; j++) {
            memo[i][j] = 0;
        }
    }

    long result =  f(n, 0, coins);
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string coins_temp_temp;
    getline(cin, coins_temp_temp);

    vector<string> coins_temp = split_string(coins_temp_temp);

    vector<int> coins(m);

    for (int i = 0; i < m; i++) {
        int coins_item = stoi(coins_temp[i]);

        coins[i] = coins_item;
    }

    long res = ways(n, coins);

    fout << res << "\n";

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
