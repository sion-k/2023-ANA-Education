#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 10'000;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readEoln();

    for (int i = 0; i < n; i++) {
        int a = inf.readInt(N_MIN, N_MAX, "a");
        inf.readSpace();
        int b = inf.readInt(N_MIN, N_MAX, "b");
        inf.readEoln();
    }

    inf.readEof();
}
