#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void printResult(vector<string> result) {
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}

vector<string> f(vector<vector<int>> queries) {
    set<int> s;
    vector<string> result;
    for (int i = 0; i < queries.size(); i++) {
        if (queries[i][0] == 1) {
            s.insert(queries[i][1]);
        } else if (queries[i][0] == 2) {
            s.erase(queries[i][1]);
        } else if (queries[i][0] == 3) {
            if (s.find(queries[i][1]) != s.end()) {
                result.push_back("Yes");
            } else {
                result.push_back("No");
            }
        }
    }

    return result;
}

int main() {

    int q;
    cin >> q;

    vector<vector<int>> queries;
    for (int i = 0; i < q; i++) {
        vector<int> query;
        int y;
        cin >> y;
        int x;
        cin >> x;
        query.push_back(y);
        query.push_back(x);
        queries.push_back(query);
    }

    vector<string> result = f(queries);
    printResult(result);

    return 0;
}
