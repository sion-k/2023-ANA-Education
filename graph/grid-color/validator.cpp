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

    int x = inf.readInt(1, n, "x");
    inf.readSpace();
    int y = inf.readInt(1, m, "y");
    inf.readEoln();

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        s[i] = inf.readLine("[#.]{" + to_string(m) + "}", "s[x]");
    }

    inf.readEof();

    ensuref(s[x - 1][y - 1] == '.', "(x, y) must be empty");
}
