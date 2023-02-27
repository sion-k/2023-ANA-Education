#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

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

    int m = rnd.next(1, n - 1);

    for (int i = 0; i < n - 1 - m; i++) {
        auto [u, v] = rnd.any(edge);

        auto it = find(edge.begin(), edge.end(), make_pair(u, v));
        edge.erase(it);
    }

    shuffle(edge.begin(), edge.end());

    cout << n << " " << m << "\n";
    for (auto [u, v] : edge) {
        cout << u << " " << v << "\n";
    }
}
