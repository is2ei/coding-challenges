#include <bits/stdc++.h>

using namespace std;

map <long, long> m;

// Complete the theGreatXor function below.
long theGreatXor(long x) {

    long tmp = 1;
    while (tmp < x) {
        tmp <<= 1;
        tmp += 1;
    }

    long count = x ^ tmp;
    
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long x;
        cin >> x;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = theGreatXor(x);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
