#include <bits/stdc++.h>

using namespace std;

vector<long> f(vector<long> a) {

    stack<long> st;
    st.push(0);

    vector<long> result;
    for (int i = 0; i < a.size(); i++) {
        result.push_back(0);
    }

    for (int i = 1; i < a.size(); i++) {
        long next = a[i];

        while (!st.empty()) {
            if (a[st.top()] < next) {
                result[st.top()] = next;
                st.pop();
            } else {
                break;
            }
        }

        st.push(i);
    }

    while (!st.empty()) {
        result[st.top()] = -1;
        st.pop();
    }

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<long> a;
        for (int j = 0; j < n; j++) {
            long tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        vector<long> result = f(a);
        if (!result.empty()) {
            for (int j = 0; j < result.size() - 1; j++) {
                cout << result[j] << " ";
            }
            cout << result[result.size() - 1] << endl;
        }
    }

    return 0;
}