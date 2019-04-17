#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> numbers;

    int max = 0;
    for (int i = 0; i < n; i++) {
        int ope;
        cin >> ope;

        int top = 0;
        switch (ope) {
            case 1:
                int v;
                cin >> v;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                if (max < v) {
                    max = v;
                }

                numbers.push_back(v);

                break;
            case 2:
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                top = numbers[numbers.size() - 1];

                numbers.pop_back();

                if (max == top) {
                    max = 0;
                    for (int i = 0; i < numbers.size(); i++) {
                        if (max < numbers[i]) {
                            max = numbers[i];
                        }
                    }
                }
                if (numbers.empty()) {
                    max = 0;
                }
                break;
            case 3:
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                std::cout << max << "\n";
                break;
        }
    }

    return 0;
}
