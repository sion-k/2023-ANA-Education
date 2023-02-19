#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 50;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    int m = n * (n - 1) / 2;

    vector<pair<int, int>> edge;
    for (int u = 1; u <= n; u++) {
        for (int v = u + 1; v <= n; v++) {
            if (rnd.next(0, 1)) {
                edge.emplace_back(u, v);
            } else {
                edge.emplace_back(v, u);
            }
        }
    }

    shuffle(edge.begin(), edge.end());

    int k = rnd.next(2, n);
    vector<int> path = rnd.perm(k);

    cout << n << " " << m << "\n";
    for (int i = 0; i < m; i++) {
        cout << edge[i].first << " " << edge[i].second << "\n";
    }
    cout << k << "\n";
    for (int i = 0; i < k; i++) {
        cout << path[i] + 1 << " \n"[i == k - 1];
    }
}
