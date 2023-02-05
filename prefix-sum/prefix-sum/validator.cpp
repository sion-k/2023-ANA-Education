#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100;
const int AI_MIN = -100, AI_MAX = 100;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readEoln();

    vector<int> a = inf.readInts(n, AI_MIN, AI_MAX, "a");
    inf.readEoln();

    inf.readEof();
}
