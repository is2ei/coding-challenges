#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t) {

    /**
     * Brute force
     */
//    long v = 3;
//    long i = 1;
//    while (true) {
//        if (v == 0) {
//            v = (i / 3 + 1) * 3;
//        }
//
//        if (i == t) {
//            break;
//        }
//
//        v--;
//        i++;
//    }
//    return v;


    long p = 1;
    long initial = 3;
    while (p < t) {
        p += initial;
        initial *= 2;

        if (p + initial > t) {
            break;
        }
    }

    return initial - (t - p);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
