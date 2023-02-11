#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = N_MAX;
    int size = 0;
    vector<pair<string, int>> op(n);
    op[n - 1].first = "pop";

    for (int i = 0; i < n - 1; i++) {
        if (size == 0 || rnd.next(0, 1)) {
            op[i].first = "push";
            op[i].second = rnd.next(N_MIN, N_MAX);
            size++;
        } else {
            op[i].first = "pop";
            size = min(size - 1, 0);
        }
    }

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << op[i].first;

        if (op[i].first == "push") {
            cout << " " << op[i].second;
        }

        cout << "\n";
    }
}
