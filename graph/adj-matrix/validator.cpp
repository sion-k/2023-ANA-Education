#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 50;

bool is_simple(int n, int m, vector<pair<int, int>>& edge) {
    vector<vector<int>> adj(n + 1, vector<int>(n + 1));

    for (auto [u, v] : edge) {
        if (u == v || adj[u][v]) return false;
        adj[u][v] += 1, adj[v][u] += 1;
    }

    return true;
}

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readSpace();
    int m = inf.readInt(1, n * (n - 1) / 2, "m");
    inf.readEoln();

    vector<pair<int, int>> edge;
    for (int i = 0; i < m; i++) {
        int u = inf.readInt(1, n, "u");
        inf.readSpace();
        int v = inf.readInt(1, n, "v");

        inf.readEoln();

        edge.emplace_back(u, v);
    }

    inf.readEof();
    ensuref(is_simple(n, m, edge), "The graph must be simple.");
}
