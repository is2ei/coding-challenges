#include <iostream>
#include <vector>

using namespace std;

void printResult(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
}

int compare(int a, int b, vector<pair<string, int> >& arr) {
    if (arr[a].first > arr[b].first) {
        return 1;
    }
    if (arr[a].first < arr[b].first) {
        return -1;
    }
    if (arr[a].second < arr[b].second) {
        return 1;
    }

    return 0;
}

vector<int> f(vector<pair<string, int> > a) {

    vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        result.push_back(i + 1);
    }

    for (int i = 0; i < a.size(); i++) {
        for (int j = a.size() - 1; j > i; j--) {
            if (compare(result[j - 1] - 1, result[j] - 1, a) == 1) {
                swap(result[j - 1], result[j]);
            }
        }
    }

    return result;
}

int main() {

    int n;
    cin >> n;

    vector<pair<string, int> > a;
    for (int i = 0; i < n; i++) {
        pair<string, int> p;
        cin >> p.first;
        cin >> p.second;
        a.push_back(p);
    }

    vector<int> result = f(a);
    printResult(result);

    return 0;
}
