#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 10'000;
const int Q_MIN = 1, Q_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);

    string s;
    for (int i = 0; i < n; i++) {
        s.push_back('a' + rnd.next(0, 25));
    }
    cout << s << "\n";

    int q = rnd.next(Q_MIN, Q_MAX);
    cout << q << "\n";

    for (int i = 0; i < q; i++) {
        int u = rnd.next(1, n);
        int v = rnd.next(u, n);

        cout << u << " " << v << "\n";
    }
}
