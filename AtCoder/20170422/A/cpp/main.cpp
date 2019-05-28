#include <iostream>

using namespace std;

string f(string s1, string s2, string s3) {
    string result = "";
    result += s1[0] ^ 32;
    result += s2[0] ^ 32;
    result += s3[0] ^ 32;

    return result;
}

int main() {

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string result = f(s1, s2, s3);
    cout << result << endl;

    return 0;
}
