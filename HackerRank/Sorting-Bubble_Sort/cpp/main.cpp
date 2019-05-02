#include <bits/stdc++.h>

using namespace std;

namespace is2ei {

    void rotateLeft(vector<int>& arr) {
        if (arr.size() == 1) {
            return;
        }

        int tmp = arr[0];
        for (int i = 0; i < arr.size() - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[arr.size() - 1] = tmp;
    }

    void bubbleSort(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = arr.size() - 1; j > i; j--) {
                if (arr[j - 1] > arr[j]) {
                    int tmp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

}

vector<string> split_string(string);

// Complete the countSwaps function below.
void countSwaps(vector<int> a) {
    int count_swap = 0;
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = a.size() - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
                count_swap++;
            }
        }
    }

    cout << "Array is sorted in " << count_swap << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[a.size() - 1] << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    countSwaps(a);

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
