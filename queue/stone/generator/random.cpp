#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100'000;
const int M_MIN = 1, M_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    int m = rnd.next(M_MIN, M_MAX);

    cout << n << " " << m << "\n";

    vector<string> ops;
    ops.push_back("raise");
    ops.push_back("discard");

    for (int i = 0; i < m; i++) {
        cout << rnd.any(ops) << "\n";
    }
}
