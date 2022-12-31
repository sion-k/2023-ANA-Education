#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int T_MIN = 1, T_MAX = 100;
const int N_MIN = 1, N_MAX = 200'000;
const int AI_MIN = 1, AI_MAX = 1'000'000'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int t = T_MIN;
    cout << t << "\n";

    while (t--) {
        int n = N_MAX;
        cout << n << "\n";

        for (int i = 1; i <= n / 2; i++) {
            cout << i << " " << i + 2 << " \n"[i == n / 2];
        }
    }

}
