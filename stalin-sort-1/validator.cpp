#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int T_MIN = 1, T_MAX = 100;
const int N_MIN = 1, N_MAX = 50;
const int AI_MIN = 1, AI_MAX = 100;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int t = inf.readInt(T_MIN, T_MAX, "t");
    inf.readEoln();

    while (t--) {
        int n = inf.readInt(N_MIN, N_MAX, "n");
        inf.readEoln();

        vector<int> a = inf.readInts(n, AI_MIN, AI_MAX, "a");
        inf.readEoln();
    }

    inf.readEof();
}
