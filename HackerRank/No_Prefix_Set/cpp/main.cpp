#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        Node(char c) {
            this->data = c;
            this->end = false;
        }
        char data;
        bool end;
        map<char, Node*> children;
};

class Trie {
    public:
        Trie(vector<string> arr) {
            for (int i = 0; i < arr.size(); i++) {
                Node *n;
                if (head.find(arr[i][0]) != head.end()) {
                    n = head[arr[i][0]];
                } else {
                    n = new Node(arr[i][0]);
                    head[arr[i][0]] = n;
                }

                for (int j = 1; j < arr[i].size(); j++) {
                    if (n->children.find(arr[i][j]) != n->children.end()) {
                        n = n->children[arr[i][j]];
                    } else {
                        Node *tmp = new Node(arr[i][j]);
                        n->children[arr[i][j]] = tmp;
                        n = tmp;
                    }
                }
                n->end = true;
            }
        }

        map<char, Node*> head;

        bool checkAndAdd(string s) {
            bool has_prefix = false;
            bool is_prefix = true;
            Node *n;
            if (head.find(s[0]) != head.end()) {
                n = head[s[0]];
                if (n->end == true) {
                    has_prefix = true;
                }
            } else {
                n = new Node(s[0]);
                head[s[0]] = n;
                is_prefix = false;
            }

            for (int i = 1; i < s.size(); i++) {
                if (n->children.find(s[i]) != n->children.end()) {
                    n = n->children[s[i]];
                    if (n->end == true) {
                        has_prefix = true;
                    }
                } else {
                    Node *tmp = new Node(s[i]);
                    n->children[s[i]] = tmp;
                    n = tmp;
                    is_prefix = false;
                }
            }

            if (n->end == true) {
                has_prefix = true;
            }
            n->end = true;

            return has_prefix || is_prefix;
        }
};


int f(vector<string> arr) {

    vector<string> tmp;
    tmp.push_back(arr[0]);

    Trie *t = new Trie(tmp);

    for (int i = 1; i < arr.size(); i++) {
        if (t->checkAndAdd(arr[i]) == true) {
            return i;
        }
    }

    return -1;
}


int main() {

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');    

    vector<string> arr;
    for (int i = 0; i < n; i++) {
        string tmp;
        getline(cin, tmp);
        arr.push_back(tmp);
    }

    int result = f(arr);
    if (result == -1) {
        cout << "GOOD SET" << endl;
    } else {
        cout << "BAD SET" << endl;
        cout << arr[result] << endl;
    }

    return 0;
}
