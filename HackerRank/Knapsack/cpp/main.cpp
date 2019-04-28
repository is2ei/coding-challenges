#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int memo[3000][3000] = {0};

int f2(vector<int> arr, int position, int k) {

    if (memo[position][k] != -1) {
        return memo[position][k];
    }

    if (position == arr.size()) {
        memo[position][k] = 0;
    } else if (arr[position] > k) {
        memo[position][k] = f2(arr, position + 1, k);
    } else {
        int tmp1 = f2(arr, position + 1, k);
        int tmp2 = f2(arr, position, k - arr[position]) + arr[position];
        int tmp3 = f2(arr, position + 1, k - arr[position]) + arr[position];

        if (tmp1 >= tmp2 && tmp1 >= tmp3) {
            memo[position][k] = tmp1;
        }
        if (tmp2 >= tmp1 && tmp2 >= tmp3) {
            memo[position][k] = tmp2;
        }
        if (tmp3 >= tmp1 && tmp3 >= tmp2) {
            memo[position][k] = tmp3;
        }
    }

    return memo[position][k];
}

// Complete the unboundedKnapsack function below.
int unboundedKnapsack(int k, vector<int> arr) {

    for (int i = 0; i < 3000; i++) {
        for (int j = 0; j < 3000; j++) {
            memo[i][j] = -1;
        }
    }

    return f2(arr, 0, k);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++) {
        string nk_temp;
        getline(cin, nk_temp);

        vector<string> nk = split_string(nk_temp);

        int n = stoi(nk[0]);

        int k = stoi(nk[1]);

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split_string(arr_temp_temp);

        vector<int> arr(n);

        for (int j = 0; j < n; j++) {
            int arr_item = stoi(arr_temp[j]);

            arr[j] = arr_item;
        }

        int result = unboundedKnapsack(k, arr);

        fout << result << "\n";
    }



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
