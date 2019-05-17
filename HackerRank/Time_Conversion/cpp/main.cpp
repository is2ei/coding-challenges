#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string result = s.substr(0, 8);

    if (s[8] == 'A') {
        if (s[0] == '1') {
            if (s[1] == '2') {
                result[0] = '0';
                result[1] = '0';
            }
        }
    } else if (s[8] == 'P') {
        if (s[0] == '0') {
            if (s[1] != '8' && s[1] != '9') {
                result[0] = '1';
                result[1] = result[1] - '0' + 2 + '0';
            } else {
                result[0] = '2';
                result[1] = (result[1] - '0' + 2) % 10 + '0'; 
            }
        } else if (s[0] == '1' && (s[1] == '0' || s[1] == '1')) {
            result[0] = '2';
            result[1] = result[1] - '0' + 2 + '0';
        }
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
