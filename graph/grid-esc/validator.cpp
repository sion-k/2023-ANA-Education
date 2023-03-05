#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 50;
const int M_MIN = 1, M_MAX = 50;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readSpace();
    int m = inf.readInt(M_MIN, M_MAX, "m");
    inf.readEoln();

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        s[i] = inf.readLine("[#.]{" + to_string(m) + "}", "s[x]");
    }

    inf.readEof();

    ensuref(s[0][0] == '.', "(1, 1) must be empty");
    ensuref(s[n - 1][m - 1] == '.', "(N, M) must be empty");
}
