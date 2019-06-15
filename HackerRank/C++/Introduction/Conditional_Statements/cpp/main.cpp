#include <bits/stdc++.h>

using namespace std;

string f(int n) {
    if (n == 1) {
        return "one";
    } else if (n == 2) {
        return "two";
    } else if (n == 3) {
        return "three";
    } else if (n == 4) {
        return "four";
    } else if (n == 5) {
        return "five";
    } else if (n == 6) {
        return "six";
    } else if (n == 7) {
        return "seven";
    } else if (n == 8) {
        return "eight";
    } else if (n == 9) {
        return "nine";
    }

    return "Greater than 9";
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    string result = f(n);
    cout << result << endl;

    return 0;
}
