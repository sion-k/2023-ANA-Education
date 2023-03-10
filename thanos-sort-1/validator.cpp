#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 50;
const int AI_MIN = 1, AI_MAX = 1000;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int tc = inf.readInt(1, 10000, "tc");
    inf.readEoln();

    while (tc--) {
        int n = inf.readInt(N_MIN, N_MAX, "n");
        inf.readEoln();

        vector<int> a = inf.readInts(n, AI_MIN, AI_MAX, "a");
        inf.readEoln();
    }

    inf.readEof();
}
