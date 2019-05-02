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

    void merge(vector<int>& left_arr, vector<int>& right_arr, vector<int>& arr) {
        int i = 0;
        int j = 0;
        while (i < left_arr.size() && j < right_arr.size()) {
            if (left_arr[i] < right_arr[j]) {
                arr[i + j] = left_arr[i];
                i++;
            } else {
                arr[i + j] = right_arr[j];
                j++;
            }
        }

        while (i < left_arr.size()) {
            arr[i + j] = left_arr[i];
            i++;
        }

        while (j < right_arr.size()) {
            arr[i + j] = right_arr[j];
            j++;
        }
    }

    void mergeSort(vector<int>& arr) {
        if (arr.size() <= 1) {
            return;
        }

        int left_size = arr.size() / 2;
        int right_size = arr.size() - left_size;

        vector<int> left_arr;
        vector<int> right_arr;

        for (int i = 0; i < left_size; i++) {
            left_arr.push_back(arr[i]);
        }

        for (int i = 0; i < right_size; i++) {
            right_arr.push_back(arr[left_size + i]);
        }

        mergeSort(left_arr);
        mergeSort(right_arr);
        merge(left_arr, right_arr, arr);
    }

}

vector<string> split_string(string);

// Complete the maximumToys function below.
int maximumToys(vector<int> prices, int k) {

    //is2ei::bubbleSort(prices);
    is2ei::mergeSort(prices);

    int count = 0;
    for (int i = 0; i < prices.size(); i++) {
        if (k < prices[i]) {
            return count; 
        } else {
            k -= prices[i];
            count++;
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string prices_temp_temp;
    getline(cin, prices_temp_temp);

    vector<string> prices_temp = split_string(prices_temp_temp);

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        int prices_item = stoi(prices_temp[i]);

        prices[i] = prices_item;
    }

    int result = maximumToys(prices, k);

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
