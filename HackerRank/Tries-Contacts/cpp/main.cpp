#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

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

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    map<char, Trie*> m;
    for (int n_itr = 0; n_itr < n; n_itr++) {
        string opContact_temp;
        getline(cin, opContact_temp);

        vector<string> opContact = split_string(opContact_temp);

        string op = opContact[0];

        string contact = opContact[1];

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
                cout << findContact(contact, 0, m[contact[0]]) << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

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
