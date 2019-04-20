#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the quickSort function below.
vector<int> quickSort(vector<int> arr) {

    int p = arr[0];

    vector<int> left;
    vector<int> right;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < p) {
            left.push_back(arr[i]);
        } else if (arr[i] > p) {
            right.push_back(arr[i]);
        }
    }

    vector<int> v;
    for (int i = 0; i < left.size(); i++) {
        v.push_back(left[i]);
    }
    v.push_back(p);
    for (int i = 0; i < right.size(); i++) {
        v.push_back(right[i]);
    }

    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = quickSort(arr);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

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
