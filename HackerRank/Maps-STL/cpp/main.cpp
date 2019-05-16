#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

void printResult(vector<int> result) {
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}

vector<int> f(vector<vector<string>> queries) {

    map<string, int> m;
    vector<int> result;
    for (int i = 0; i < queries.size(); i++) {
        vector<string> query = queries[i];
        if (query[0][0] == '1') {
            int val = std::stoi(query[2]);
            if (m.find(query[1]) != m.end()) {
                m[query[1]] += val;
            } else {
                m.insert(make_pair(query[1], val));
            }
        } else if (query[0][0] == '2') {
            m.erase(query[1]);
        } else if (query[0][0] == '3') {
            if (m.find(query[1]) != m.end()) {
                result.push_back(m[query[1]]);
            } else {
                result.push_back(0);
            }
        }
    }

    return result;
}

int main() {

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<string>> queries;
    for (int i = 0; i < q; i++) {

        string line;
        getline(cin, line);

        vector<string> v;
        string tmp = "";
        for (int i = 0; i < line.size(); i++) {
            if (line[i] == ' ') {
                v.push_back(tmp);
                tmp = "";
                continue;
            }
            tmp += line[i];
        }
        v.push_back(tmp);

        queries.push_back(v);
    }

    vector<int> result = f(queries);
    printResult(result);

    return 0;
}
