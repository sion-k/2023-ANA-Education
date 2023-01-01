#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int T_MIN = 1, T_MAX = 100;
const int N_MIN = 1, N_MAX = 50;
const int AI_MIN = 0, AI_MAX = 10;
const int M_MIN = 1, M_MAX = 50;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int t = T_MAX;
    cout << t << "\n";

    while (t--) {
        int n = rnd.next(N_MIN, N_MAX);
        cout << n << "\n";

        for (int i = 0; i < n; i++) {
            int ai = rnd.next(AI_MIN, AI_MAX);
            cout << ai << " \n"[i == n - 1];
        }

        int m = rnd.next(M_MIN, M_MAX);
        cout << m << "\n";

        for (int i = 0; i < m; i++) {
            int u = rnd.next(1, n), v = rnd.next(1, n);
            cout << u << " " << v << "\n";
        }
    }

}
