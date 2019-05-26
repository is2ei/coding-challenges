#include <iostream>
#include <vector>

using namespace std;

int f(vector<int> v, vector<int> c) {
    int result = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > c[i]) {
            result += v[i] - c[i];
        }
    }
    return result;
}

int main() {

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    vector<int> c;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        c.push_back(tmp);
    }

    int result = f(v, c);
    cout << result << endl;

    return 0;
}
