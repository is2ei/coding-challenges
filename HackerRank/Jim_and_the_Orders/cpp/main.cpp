#include <bits/stdc++.h>

using namespace std;

// Complete the jimOrders function below.
vector<int> jimOrders(vector<vector<int>> orders) {

    vector<int> result;
    map<int, int> t;
    for (int i = 0; i < orders.size(); i++) {
        result.push_back(i + 1);
        t[i + 1] = orders[i][0] + orders[i][1];
    }

    /**
     * Bubble sort
     */
    for (int i = 0; i < result.size(); i++) {
        for (int j = i + 1; j < result.size(); j++) {
            if (t[result[i]] > t[result[j]]) {
                int tmp = result[j];
                result[j] = result[i];
                result[i] = tmp;
                continue;
            }
            if (t[result[i]] == t[result[j]] && result[i] > result[j]) {
                int tmp = result[j];
                result[j] = result[i];
                result[i] = tmp;
                continue;
            }
        }
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> orders(n);
    for (int i = 0; i < n; i++) {
        orders[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> orders[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = jimOrders(orders);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
