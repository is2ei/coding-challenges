#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float t, x;
    cin >> t >> x;

    float result = t / x;
    cout << fixed << setprecision(7) << result << endl;

    return 0;
}
