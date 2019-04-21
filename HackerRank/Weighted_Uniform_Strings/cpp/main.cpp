#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {

    map<int, bool> m;
    char c = (int)s[0] - 96;
    int consecutive = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            consecutive += (int)s[i] - 96;
        } else {
            c = s[i];
            consecutive = (int)s[i] - 96;
        }

        m[consecutive] = true;
    }

    vector<string> v;
    for (int i = 0; i < queries.size(); i++) {
        if (m.find(queries[i]) != m.end()) {
            v.push_back("Yes");
        } else {
            v.push_back("No");
        }
    }

    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

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
