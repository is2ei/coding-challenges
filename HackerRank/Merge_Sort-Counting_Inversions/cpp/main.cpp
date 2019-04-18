#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long count_inversion = 0;

void merge(vector<int>& arr, int begin, int middle, int end) {

    int a = middle - begin + 1;
    int b = end - middle;

    int left[a];
    int right[b];

    for (int i = 0; i < a; i++) {
        left[i] = arr[begin + i];
    }

    for (int i = 0; i < b; i++) {
        right[i] = arr[middle + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = begin;
    while (i < a && j < b) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            count_inversion += a - i;
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < a) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < b) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int begin, int end) {
    if (begin < end) {
        int middle = begin + (end - begin) / 2;

        mergeSort(arr, begin, middle);
        mergeSort(arr, middle + 1, end);

        merge(arr, begin, middle, end);
    }
}

// Complete the countInversions function below.
long countInversions(vector<int> arr) {
    count_inversion = 0;

    /**
     * Brute force
     **/
//    for (int i = 0; i < arr.size(); i++) {
//        for (int j = i + 1; j < arr.size(); j++) {
//            if (arr[i] > arr[j]) {
//                count_inversion++;
//            }
//        }
//    }

    mergeSort(arr, 0, arr.size() - 1);

    return count_inversion;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
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

        long result = countInversions(arr);

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
