#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the findMedian function below.
int findMedian(vector<int> arr) {

    /**
     * Bubble sort
     * O(n^2)
     */
//    bool swapped = false;
//    for (int i = 0; i < arr.size(); i++) {
//        for (int j = arr.size() - 1; j > i; j--) {
//            if (arr[j] < arr[j - 1]) {
//                std::swap(arr[j], arr[j - 1]);
//                swapped = true;
//            }
//        }
//        if (!swapped) {
//            break;
//        }
//    }

    /**
     * Selection sort
     * O(n^2)
     */
//    for (int i = 0; i < arr.size() - 1; i++) {
//        int min_idx = i;
//        for (int j = i + 1; j < arr.size(); j++) {
//            if (arr[min_idx] > arr[j]) {
//                min_idx = j;
//            }
//        }
//        if (i != min_idx) {
//            std::swap(arr[i], arr[min_idx]);
//        }
//    }

    /**
     * Insertion sort
     * O(n^2)
     */
//    for (int i = 1; i < arr.size(); i++) {
//        if (arr[i - 1] < arr[i]) {
//            continue;
//        }
//
//        int tmp = arr[i];
//        int idx = i;
//        while (idx > 0 && tmp < arr[idx - 1]) {
//            arr[idx] = arr[idx - 1];
//            idx--;
//        }
//        arr[idx] = tmp;
//    }

    /**
     * Counting sort
     * O(n + k)
     */
    int count[200000] = {0};
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }
    int idx = 0;
    for (int i = 0; i < 200000; i++) {
        for (int j = 0 ; j < count[i]; j++) {
            arr[idx] = i;
            idx++;
        }
    }

    // For debugging
//    for (int i = 0; i < arr.size(); i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;

    if (arr.size() % 2 == 0) {
        return (arr[arr.size() / 2 - 1] + arr[arr.size() / 2]) / 2;
    }

    return arr[arr.size() / 2];
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

    int result = findMedian(arr);

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
