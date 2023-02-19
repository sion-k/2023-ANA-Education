#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 50;

void erase_one(int n, int m, vector<pair<int, int>>& edge, int k, vector<int>& path) {
    vector<vector<int>> adj(n + 1, vector<int>(n + 1));
    for (auto [u, v] : edge) {
        adj[u][v] += 1, adj[v][u] += 1;
    }

    int p = rnd.next(0, k - 2);
    int u = path[p] + 1, v = path[p + 1] + 1;

    auto it1 = find(edge.begin(), edge.end(), make_pair(u, v));
    auto it2 = find(edge.begin(), edge.end(), make_pair(v, u));

    if (it1 != edge.end()) {
        edge.erase(it1);
    } else if (it2 != edge.end()) {
        edge.erase(it2);
    }
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    int m = rnd.next(2, n * (n - 1) / 2);

    vector<pair<int, int>> all_edge;
    for (int u = 1; u <= n; u++) {
        for (int v = u + 1; v <= n; v++) {
            if (rnd.next(0, 1)) {
                all_edge.emplace_back(u, v);
            } else {
                all_edge.emplace_back(v, u);
            }
        }
    }

    vector<pair<int, int>> edge;

    for (int i = 0; i < m; i++) {
        auto [u, v] = rnd.any(all_edge);

        auto it = find(all_edge.begin(), all_edge.end(), make_pair(u, v));
        all_edge.erase(it);

        edge.emplace_back(u, v);
    }

    shuffle(edge.begin(), edge.end());

    int k = rnd.next(2, n);
    vector<int> path = rnd.perm(k);

    erase_one(n, m, edge, k, path);
    m--;

    cout << n << " " << m << "\n";
    for (int i = 0; i < m; i++) {
        cout << edge[i].first << " " << edge[i].second << "\n";
    }
    cout << k << "\n";
    for (int i = 0; i < k; i++) {
        cout << path[i] + 1 << " \n"[i == k - 1];
    }
}
