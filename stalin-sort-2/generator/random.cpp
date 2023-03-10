#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int T_MIN = 1, T_MAX = 100;
const int N_MIN = 1, N_MAX = 200'000;
const int AI_MIN = 1, AI_MAX = 1'000'000'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int t = T_MAX;
    cout << t << "\n";

    while (t--) {
        int n = rnd.next(N_MIN, N_MAX / T_MAX);
        cout << n << "\n";

        for (int i = 0; i < n; i++) {
            int ai = rnd.next(AI_MIN, AI_MAX);
            cout << ai << " \n"[i == n - 1];
        }
    }

}
