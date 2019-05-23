#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    int count = 0;
    int max = 0;
    while (n) {
        if (n & 1) {
            count++;
        } else {
            count = 0;
        }
        if (max < count) {
            max = count;
        }
        n >>= 1;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = f(n);
    cout << result << endl;

    return 0;
}
