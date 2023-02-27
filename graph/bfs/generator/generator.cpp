#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 50;

vector<pair<int, int>> tree(int n, int t) {
    vector<int> p(n);

    for (int i = 0; i < n; i++) if (i > 0) {
        p[i] = rnd.wnext(i, t);
    }

    vector<int> perm(n);
    for (int i = 0; i < n; i++) {
        perm[i] = i;
    }

    shuffle(perm.begin() + 1, perm.end());

    vector<pair<int, int> > edges;
    for (int i = 1; i < n; i++) {
        if (rnd.next(2)) {
            edges.push_back(make_pair(perm[i], perm[p[i]]));
        } else {
            edges.push_back(make_pair(perm[p[i]], perm[i]));
        }
    }

    for (auto& [u, v] : edges) {
        u++, v++;
    }

    return edges;
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);
    int t = atoi(argv[2]);

    vector<pair<int, int>> edge = tree(n, t);

    vector<vector<int>> adj(n + 1, vector<int>(n + 1));
    for (auto [u, v] : edge) {
        adj[u][v] = adj[v][u] = true;
    }

    vector<pair<int, int>> cand;

    for (int u = 1; u <= n; u++) {
        for (int v = u + 1; v <= n; v++) {
            if (adj[u][v] || adj[v][u]) {
                continue;
            }

            if (rnd.next(0, 1)) {
                cand.emplace_back(u, v);
            } else {
                cand.emplace_back(v, u);
            }
        }
    }

    int k = rnd.next(0, (int)cand.size());
    int m = n - 1 + k;

    for (int i = 0; i < k; i++) {
        auto [u, v] = rnd.any(cand);
        edge.emplace_back(u, v);

        auto it = find(cand.begin(), cand.end(), make_pair(u, v));
        cand.erase(it);
    }

    shuffle(edge.begin(), edge.end());

    cout << n << " " << m << "\n";
    for (auto [u, v] : edge) {
        cout << u << " " << v << "\n";
    }
}
