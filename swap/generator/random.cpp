#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100;
const int M_MIN = 1, M_MAX = 10000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    int m = rnd.next(M_MIN, M_MAX);
    cout << n << " " << m << "\n";

    vector<pair<int, int>> a;
    for (int u = 1; u <= n; u++) {
        for (int v = 1; v <= n; v++) {
            if (u != v) {
                a.emplace_back(u, v);
            }
        }
    }

    for (int i = 0; i < m; i++) {
        auto p = rnd.any(a);
        cout << p.first << " " << p.second << "\n";
    }
}
