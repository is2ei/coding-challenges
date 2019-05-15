#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

void printResult(vector<string> result) {
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}

vector<string> f(vector<int> x, vector<int> y) {

    vector<string> result;
    for (int i = 0; i < y.size(); i++) {
        std::vector<int>::iterator it = std::lower_bound(x.begin(), x.end(), y[i]);

        stringstream ss;
        ss << (it - x.begin() + 1);

        string tmp = "";
        if (x[it - x.begin()] == y[i]) {
            tmp.append("Yes ");
        } else {
            tmp.append("No ");
        }
        tmp.append(ss.str());

        result.push_back(tmp);
    }

    return result;
}

int main() {

    int n;
    cin >> n;

    vector<int> x;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        x.push_back(tmp);
    }

    int q;
    cin >> q;

    vector<int> y;
    for (int i = 0; i < q; i++) {
        int tmp;
        cin >> tmp;
        y.push_back(tmp);
    }

    vector<string> result = f(x, y);
    printResult(result);

    return 0;
}
