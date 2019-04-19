#include <bits/stdc++.h>

using namespace std;

int max_len;

void f(string s, string& origin, int position, map<string, bool>& m) {
    s.append(origin.substr(position, 1));

    m[s] = true;

    if (position + 1 == origin.size()) {
        return;
    }

    for (int i = position + 1; i < origin.size(); i++) {
        f(s, origin, i, m);
    }
}

// Complete the commonChild function below.
int commonChild(string s1, string s2) {

    /**
     * Brute force
     */
//    map<string, bool> map_s1;
//    for (int i = 0; i < s1.size(); i++) {
//        f("", s1, i, map_s1);
//    }
//
//    map<string, bool> map_s2;
//    for (int i = 0; i < s2.size(); i++) {
//        f("", s2, i, map_s2);
//    }
//
//    int max = 0;
//    for (auto const& e1: map_s1) {
//        for (auto const& e2: map_s2) {
//            if (e1.first.compare(e2.first) == 0) {
//                if (max < e1.first.size()) {
//                    max = e1.first.size();
//                }
//            }
//        }
//    }

    int max = 0;

    vector<int> v;
    for (int j = 0; j < 5000; j++) {
        v.push_back(0);
    }

    vector<int> arr[5000];
    for (int i = 0; i < 5000; i++) {
        arr[i] = v;
    }


    for (int i = 0; i < s1.size(); i++) {
        int max_left = 0;
        int is_matched = false;
        for (int j = 0; j < s2.size(); j++) {

            if (s1[i] == s2[j]) {
                if (i == 0 || j == 0) {
                    arr[i][j] = 1;
                } else {
                    arr[i][j] = arr[i - 1][j - 1] + 1;
                }
            } else {
                if (i > 0 && max_left < arr[i - 1][j]) {
                    arr[i][j] = arr[i - 1][j];
                } else {
                    arr[i][j] = max_left;
                }
            }

            if (max_left < arr[i][j]) {
                max_left = arr[i][j];
            }
        }
    }

    return arr[s1.size() - 1][s2.size() - 1];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
