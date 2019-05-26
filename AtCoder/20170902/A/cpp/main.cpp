#include <iostream>

using namespace std;

int main() {

    int x, t;
    cin >> x >> t;

    cout << std::max(x - t, 0) << endl;

    return 0;
}
