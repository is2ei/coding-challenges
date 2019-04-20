#include <bits/stdc++.h>

using namespace std;

int compare(string a, string b) {
    if (a.size() > b.size()) {
        return 1;
    }

    if (a.size() < b.size()) {
        return -1;
    }

    for (int i = 0; i < a.size(); i++) {
        int ai = (int)a[i];
        int bi = (int)b[i];

        if (ai > bi) {
            return 1;
        }

        if (ai < bi) {
            return -1;
        }
    } 

    return 0;
}

void merge(vector<string>& arr, int begin, int middle, int end) {

    int a = middle - begin + 1;
    int b = end - middle;

    string left[a];
    string right[b];

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
        if (compare(left[i], right[j]) == -1) {
            arr[k] = left[i];
            i++;
        } else {
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

void mergeSort(vector<string>& arr, int begin, int end) {
    if (begin < end) {
        int middle = begin + (end - begin) / 2;

        mergeSort(arr, begin, middle);
        mergeSort(arr, middle + 1, end);

        merge(arr, begin, middle, end);
    }
}

// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {

    /**
     * Bubble sort
     */
//    for (int i = 0; i < unsorted.size(); i++) {
//        for (int j = 0; j < unsorted.size() - 1; j++) {
//            if (compare(unsorted[j], unsorted[j + 1]) == 1) {
//                string tmp = unsorted[j];
//                unsorted[j] = unsorted[j + 1];
//                unsorted[j + 1] = tmp;
//            }
//        }
//    }

    /**
     * Merge sort
     */
    mergeSort(unsorted, 0, unsorted.size() - 1);

    return unsorted;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
