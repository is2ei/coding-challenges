#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    vector<string> stack;

    for (int i = 0; i < s.size(); i++) {
        string substring = s.substr(i, 1);
        if (substring.compare("(") == 0 || substring.compare("{") == 0 || substring.compare("[") == 0) {
            stack.push_back(substring);
        } else {
            if (substring.compare(")") == 0) {
                if (stack.size() == 0 || stack[stack.size() - 1].compare("(") != 0) {
                    return "NO";
                }
                stack.pop_back();
            } else if (substring.compare("}") == 0) {
                if (stack.size() == 0 || stack[stack.size() - 1].compare("{") != 0) {
                    return "NO";
                }
                stack.pop_back();
            } else if (substring.compare("]") == 0) {
                if (stack.size() == 0 || stack[stack.size() - 1].compare("[") != 0) {
                    return "NO";
                }
                stack.pop_back();
            }
        }
    }

    if (stack.size() > 0) {
        return "NO";
    }

    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
