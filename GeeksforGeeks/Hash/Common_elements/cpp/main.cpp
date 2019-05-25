#include <iostream>
#include <vector>
#include <set>

using namespace std;

void printResult(vector<int> arr) {
    if (arr.empty()) {
        cout << -1 << endl;
    }
    for (int i = 0; i < arr.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << arr[i];
        if (i + 1 == arr.size()) {
            cout << endl;
        }
    }
}

vector<int> f(vector<int> a1, vector<int> a2, vector<int> a3) {

    set<int> s1;
    for (int i = 0; i < a1.size(); i++) {
        s1.insert(a1[i]);
    }

    set<int> s2;
    for (int i = 0; i < a2.size(); i++) {
        if (s1.find(a2[i]) != s1.end()) {
            s2.insert(a2[i]);
        }
    }

    set<int> s3;
    for (int i = 0; i < a3.size(); i++) {
        if (s2.find(a3[i]) != s2.end()) {
            s3.insert(a3[i]);
        }
    }

    vector<int> result(s3.begin(), s3.end());

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        vector<int> a1;
        for (int j = 0; j < n1; j++) {
            int tmp;
            cin >> tmp;
            a1.push_back(tmp);
        }

        vector<int> a2;
        for (int j = 0; j < n2; j++) {
            int tmp;
            cin >> tmp;
            a2.push_back(tmp);
        }

        vector<int> a3;
        for (int j = 0; j < n3; j++) {
            int tmp;
            cin >> tmp;
            a3.push_back(tmp);
        }

        vector<int> result = f(a1, a2, a3);
        printResult(result);
    }

    return 0;
}
