#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 10;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readEoln();

    vector<int> rc = inf.readInts(4, 1, n, "rc");
    inf.readEoln();
    inf.readEof();
}
