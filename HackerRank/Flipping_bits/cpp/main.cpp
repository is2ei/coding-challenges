#include <bits/stdc++.h>

using namespace std;

// Complete the flippingBits function below.
long flippingBits(long n) {

    long memo[32];
    long tmp = 1;
    for (int i = 0; i < 32; i++) {
        memo[i] = tmp;
        tmp *= 2;
    }

    long r = 0;
    for (int i = 0; i < 32; i++) {
        if (!((n >> i) & 1U)) {
            r += memo[i];
        }
    }

    return r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = flippingBits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
