#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int binarySearchForInsert(vector<float>& arr, int item, int begin, int end) {

    if (begin >= end) {
        if (arr[begin] < item) {
            return begin + 1;
        } else {
            return begin;
        }
    }

    int middle = (begin + end) / 2;

    if (arr[middle] < item) {
        return binarySearchForInsert(arr, item, middle + 1, end);
    }

    return binarySearchForInsert(arr, item, begin, middle - 1);
}

int binarySearchForErase(vector<float>& arr, int item, int begin, int end) {

    int middle = (begin + end) / 2;

    if (arr[middle] == item) {
        return middle;
    }

    if (arr[middle] < item) {
        return binarySearchForErase(arr, item, middle + 1, end);
    }

    return binarySearchForErase(arr, item, begin, middle - 1);
}


// Complete the activityNotifications function below.
int activityNotifications(vector<int> expenditure, int d) {
    int notifications = 0;
    queue<int> q;
    vector<float> v;
    for (int i = 0; i < expenditure.size(); i++) {

        float median;
        if (q.size() == d) {
            if (v.size() % 2 == 0) {
                median = (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2;
            } else {
                median = v[v.size() / 2];
            }

            if (expenditure[i] >= 2 * median) {
                notifications++;
            }
        }

        q.push(expenditure[i]);

        if (v.empty() || v[v.size() - 1] < expenditure[i]) {
            v.push_back(expenditure[i]);
        } else if (v[0] > expenditure[i]) {
            v.insert(v.begin(), expenditure[i]);
        } else {
            /**
             * Brute force
             */
//            for (int j = 0; j < v.size(); j++) {
//                if (expenditure[i] < v[j]) {
//                    v.insert(v.begin() + j, expenditure[i]);
//                    break;
//                }
//            }

            v.insert(v.begin() + binarySearchForInsert(v, expenditure[i], 0, v.size() - 1), expenditure[i]);
        }

        if (q.size() > d) {
            /**
             * Brute force
             */
//            for (int j = 0; j < v.size(); j++) {
//                if (v[j] == q.front()) {
//                    v.erase(v.begin() + j);
//                    break;
//                }
//            }

            v.erase(v.begin() + binarySearchForErase(v, q.front(), 0, v.size() - 1));
            q.pop();
        }
    }

    return notifications;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string expenditure_temp_temp;
    getline(cin, expenditure_temp_temp);

    vector<string> expenditure_temp = split_string(expenditure_temp_temp);

    vector<int> expenditure(n);

    for (int i = 0; i < n; i++) {
        int expenditure_item = stoi(expenditure_temp[i]);

        expenditure[i] = expenditure_item;
    }

    int result = activityNotifications(expenditure, d);

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
