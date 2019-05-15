#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printResult(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
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

    int x;
    cin >> x;

    v.erase(v.begin() + x - 1);

    int a;
    cin >> a;

    int b;
    cin >> b;

    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;

    printResult(v);

    return 0;
}
