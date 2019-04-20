#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the insertionSort1 function below.
void insertionSort1(int n, vector<int> arr) {

    bool swapped = true;
    while (swapped) {
        swapped = false;

        int tmp;
        int position;
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i + 1];
                position = i;
                swapped = true;
                arr[i + 1] = arr[i];
                break;
            }
        }

        if (!swapped) {
            break;
        }

        while (true) {
            for (int i = 0; i < arr.size() - 1; i++) {
                cout << arr[i] << " ";
            }
            cout << arr[arr.size() - 1] << endl;

            if (position == 0 || arr[position - 1] <= tmp) {
                arr[position] = tmp;
                break;
            }

            arr[position] = arr[position - 1]; 

            position--;
        }

        for (int i = 0; i < arr.size() - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << arr[arr.size() - 1] << endl;
    }
}

int main()
{
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

    insertionSort1(n, arr);

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
