#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */

    if (p == 1 || p == n || (p == n - 1 && n % 2 != 0)) {
        return 0;
    }

    if (p == n - 1 && n % 2 == 0) {
        return 1;
    }

    if (n / 2 >= p) {
        return p / 2;
    } else {
        return (n - p) / 2;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
