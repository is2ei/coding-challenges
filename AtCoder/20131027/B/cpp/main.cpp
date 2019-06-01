#include <iostream>

using namespace std;

bool f2(char c) {
    return c != 'a' && c != 'i' && c != 'u' && c != 'e' && c != 'o';
}

string f(string w) {
    string result = "";
    for (int i = 0; i < w.size(); i++) {
        if (f2(w[i])) {
            result += w[i];
        }
    }
    return result;
}

int main() {

    string w;
    cin >> w;

    string result = f(w);
    cout << result << endl;

    return 0;
}
