#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 8;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int tc = inf.readInt(1, 10000, "tc");
    inf.readEoln();

    while (tc--) {
        int n = inf.readInt(N_MIN, N_MAX, "n");
        inf.readEoln();

        string s = inf.readLine("[Um]{" + to_string(n) + "}", "s");

        int a = inf.readInt(1, n, "a");
        inf.readSpace();
        int b = inf.readInt(a, n, "b");
        inf.readEoln();
    }

    inf.readEof();
}
