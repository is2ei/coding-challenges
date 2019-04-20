#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong

    bool has_digit = false;
    bool has_uppercase = false;
    bool has_lowercase = false;
    bool has_special_characters = false;
    for (int i = 0; i < password.size(); i++) {

        // 0123456789
        if ((int)password[i] >= 48 && (int)password[i] <= 57) {
            has_digit = true;
            continue;
        }

        // ABCDEFGHIJKLMNOPQRSTUVWXYZ
        if ((int)password[i] >= 65 && (int)password[i] <= 90) {
            has_uppercase = true;
            continue;
        }

        // abcdefghijklmnopqrstuvwxyz
        if ((int)password[i] >= 97 && (int)password[i] <= 122) {
            has_lowercase = true;
            continue;
        }

        switch (password[i]) {
            case '!':
            case '@':
            case '#':
            case '$':
            case '%':
            case '^':
            case '&':
            case '*':
            case '(':
            case ')':
            case '-':
            case '+':
                has_special_characters = true;
                continue;
        }
    }

    int tmp = 0;
    if (!has_digit) {
        tmp++;
    }
    if (!has_uppercase) {
        tmp++;
    }
    if (!has_lowercase) {
        tmp++;
    }
    if (!has_special_characters) {
        tmp++;
    }

    if (password.size() + tmp < 6) {
        tmp += 6 - (password.size() + tmp);
    }

    return tmp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
