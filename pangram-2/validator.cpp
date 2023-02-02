#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int Q_MIN = 1, Q_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    string s = inf.readLine("[a-zA-Z]{1,10000}");

    int q = inf.readInt(Q_MIN, Q_MAX, "q");
    inf.readEoln();

    for (int i = 0; i < q; i++) {
        int u = inf.readInt(1, s.size(), "u");
        inf.readSpace();
        int v = inf.readInt(u, s.size(), "v");
        inf.readEoln();
    }

    inf.readEof();
}
