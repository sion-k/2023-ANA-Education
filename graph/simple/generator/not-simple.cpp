#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 50;

void erase_one(vector<pair<int, int>>& edge) {
    auto it = find(edge.begin(), edge.end(), rnd.any(edge));
    edge.erase(it);
}

void loop(int n, int m, vector<pair<int, int>>& edge) {
    erase_one(edge);

    int u = rnd.next(1, n);
    edge.emplace_back(u, u);
}

void multiple(int n, int m, vector<pair<int, int>>& edge) {
    erase_one(edge);

    auto [u, v] = rnd.any(edge);

    if (rnd.next(0, 1)) {
        swap(u, v);
    }

    edge.emplace_back(u, v);
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    int m = rnd.next(1, n * (n - 1) / 2);

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

    if (rnd.next(0, 1)) {
        loop(n, m, edge);
    } else {
        multiple(n, m, edge);
    }

    shuffle(edge.begin(), edge.end());

    cout << n << " " << m << "\n";
    for (int i = 0; i < m; i++) {
        cout << edge[i].first << " " << edge[i].second << "\n";
    }
}
