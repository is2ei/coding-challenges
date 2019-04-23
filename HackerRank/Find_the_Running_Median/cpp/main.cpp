#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<double>& v, int& key, int min, int max) {
    int mid = min + (max - min) / 2;
    if (v[mid] <= key && key <= v[mid + 1]) {
        return mid + 1;
    }

    if (v[mid] < key) {
        binarySearch(v, key, mid + 1, max);
    } else {
        binarySearch(v, key, min, mid - 1);
    }

    return -1;
}

/*
 * Complete the runningMedian function below.
 */
vector<double> runningMedian(vector<int> a) {
    /*
     * Write your code here.
     */

    vector<int>v;
    for (int i = 0; i < a.size(); i++) {
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    int middle;
    if (v.size() % 2 == 0) {
        middle = (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2;
    } else {
        middle = v[v.size() / 2];
    }

    vector<double> result;
    std::priority_queue<double, std::vector<double>, std::greater<double>> upper;
    std::priority_queue<double> lower;

    for (int i = 0; i < a.size(); i++) {
        if (lower.size() < upper.size()) {
            if (a[i] < upper.top()) {
                lower.push(a[i]);
            } else {
                lower.push(upper.top());
                upper.pop();
                upper.push(a[i]);
            }
        } else if (lower.size() > upper.size()) {
            if (a[i] > lower.top()) {
                upper.push(a[i]);
            } else {
                upper.push(lower.top());
                lower.pop();
                lower.push(a[i]);
            }
        } else {
            if (upper.empty()) {
                upper.push(a[i]);
            } else if (a[i] < upper.top()) {
                lower.push(a[i]);
            } else {
                upper.push(a[i]);
            }
        }

        if (lower.size() < upper.size()) {
            result.push_back(upper.top());
        } else if (lower.size() > upper.size()) {
            result.push_back(lower.top());
        } else {
            result.push_back((upper.top() + lower.top()) / 2.0);
        }
    }

            /**
             * Brute force
             */
//            for (int j = 0; j < tmp.size(); j++) {
//                if (a[i] <= tmp[j]) {
//                    tmp.insert(tmp.begin() + j, (double)a[i]);
//                    break;
//                }
//            }

            /**
             * Binary search
             */
//            int min = 0;
//            int max = tmp.size();
//            int middle;
//            while (true) {
//                middle = min + (max - min) / 2;
//                if (tmp[middle] <= a[i] && a[i] <= tmp[middle + 1]) {
//                    tmp.insert(tmp.begin() + middle + 1, (double)a[i]);
//                    break;
//                }
//
//                if (tmp[middle] < a[i]) {
//                    min = middle + 1;
//                } else if (a[i] < tmp[middle]) {
//                    max = middle - 1;
//                }
//            }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int a_count;
    cin >> a_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> a(a_count);

    for (int a_itr = 0; a_itr < a_count; a_itr++) {
        int a_item;
        cin >> a_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        a[a_itr] = a_item;
    }

    vector<double> result = runningMedian(a);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
