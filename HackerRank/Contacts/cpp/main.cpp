#include <bits/stdc++.h>

using namespace std;

class Trie {
    public:
        char value;
        bool end;
        int count;
        map<char, Trie*> children;

        Trie(char c) {
            this->value = c;
            this->end = false;
            this->count = 0;
            map<char, Trie*> m;
            this->children = m;
        }
};

map<char, Trie*> m;

void addContact(string& s, int position, Trie* t) {
    t->count++;

    if (position == s.size()) {
        t->end = true;
        return;
    }

    Trie* child;
    if (t->children.find(s[position]) != t->children.end()) {
        child = t->children[s[position]];
    } else {
        child = new Trie(s[position]);
        t->children[s[position]] = child;
    }

    addContact(s, position + 1, child);
}

int findContact(string& s, int position, Trie* t) {
    if (position == s.size()) {
        return t->count;
    }

    if (t->children.find(s[position]) != t->children.end()) {
        return findContact(s, position + 1, t->children[s[position]]);
    }

    return 0;
}

/*
 * Complete the contacts function below.
 */
vector<int> contacts(vector<vector<string>> queries) {
    /*
     * Write your code here.
     */

    vector<int> v;
    for (int i = 0; i < queries.size(); i++) {
        string op = queries[i][0];
        string contact = queries[i][1];

        if (op.compare("add") == 0) {
            Trie *t;
            if (m.find(contact[0]) != m.end()) {
                t = m[contact[0]];
            } else {
                t = new Trie(contact[0]);
                m[contact[0]] = t;
            }
            addContact(contact, 0, t);
        } else if (op.compare("find") == 0) {
            if (m.find(contact[0]) != m.end()) {
                v.push_back(findContact(contact, 0, m[contact[0]]));
            } else {
                v.push_back(0);
            }
        }
    }

    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int queries_rows;
    cin >> queries_rows;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<string>> queries(queries_rows);
    for (int queries_row_itr = 0; queries_row_itr < queries_rows; queries_row_itr++) {
        queries[queries_row_itr].resize(2);

        for (int queries_column_itr = 0; queries_column_itr < 2; queries_column_itr++) {
            cin >> queries[queries_row_itr][queries_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = contacts(queries);

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
