#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

void printResult(vector<string> result) {
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}

vector<string> f(int a, int b) {
    vector<string> result;
    for (int i = a; i <= b; i++) {
        if (i == 1) {
            result.push_back("one");
        } else if (i == 2) {
            result.push_back("two");
        } else if (i == 3) {
            result.push_back("three");
        } else if (i == 4) {
            result.push_back("four");
        } else if (i == 5) {
            result.push_back("five");
        } else if (i == 6) {
            result.push_back("six");
        } else if (i == 7) {
            result.push_back("seven");
        } else if (i == 8) {
            result.push_back("eight");
        } else if (i == 9) {
            result.push_back("nine");
        } else if (i % 2 == 0) {
            result.push_back("even");
        } else if (i % 2 != 0) {
            result.push_back("odd");
        }
    }
    return result;
}

int main() {

    int a;
    cin >> a;
    
    int b;
    cin >> b;

    vector<string> result = f(a, b);
    printResult(result);

    return 0;
}
