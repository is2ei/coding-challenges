#include <bits/stdc++.h>

using namespace std;

vector<int> numbers;

long f(string& s, int position, int length, vector<long> v) {

    long tmp = numbers[position];
    if (tmp == 0) {
        return -1;
    }

    for (int i = 1; i < length; i++) {
        tmp *= 10;
        tmp += numbers[position + i];
    }
    v.push_back(tmp);

    if (s.size() <= position + length) {
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i + 1] - v[i] != 1) {
                return -1;
            }
        }
        return v[0];
    }

    for (int i = length; i <= s.size() - (position + length); i++) {
        long result = f(s, position + length, i, v);
        if(result > -1) {
            return result;
        }
    }

    return -1;
}

// Complete the separateNumbers function below.
void separateNumbers(string s) {

    if (s.size() == 1) {
        std::cout << "NO" << endl;
        return;
    }

    if (s[0] == '0') {
        std::cout << "NO" << endl;
        return;
    }

    vector<int> empty;
    numbers = empty;
    for (int i = 0; i < s.size(); i++) {
        int tmp = (int)s[i] - 48;
        numbers.push_back(tmp);
    }

    vector<long> v;
    for (int i = 1; i <= s.size() / 2; i++) {
        long result = f(s, 0, i, v);
        if (result > - 1) {
            std::cout << "YES " << result << endl;
            return;
        }        
    }    

    std::cout << "NO" << endl;
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

    return 0;
}
