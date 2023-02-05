#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100;
const int M_MIN = 1, M_MAX = 10'000;
const int AI_MIN = -100, AI_MAX = 100;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readSpace();
    int m = inf.readInt(M_MIN, M_MAX, "m");
    inf.readEoln();

    vector<int> a = inf.readInts(n, AI_MIN, AI_MAX, "a");
    inf.readEoln();

    for (int i = 0; i < m; i++) {
        int l = inf.readInt(1, n, "l");
        inf.readSpace();
        int r = inf.readInt(l, n, "r");
        inf.readEoln();
    }

    inf.readEof();
}
