#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b) {

    int count = 0;
    for (int i = 1; i < b.size() - 1; i++) {
        if (b[i - 1] == '0' && b[i] == '1' && b[i + 1] == '0') {
            if (i + 2 == b.size()) {
                b[i] = '0';
                count++;
                continue;
            }

            if (b[i + 2] == '1') {
                b[i + 1] = '1';
                count++;
            } else {
                b[i] = '0';
                count++;
            }
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}
