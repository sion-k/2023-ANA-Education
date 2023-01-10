#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 200'000;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int tc = inf.readInt(1, 10000, "tc");
    inf.readEoln();

    int sum_of_n = 0, sum_of_m = 0;

    while (tc--) {
        int n = inf.readInt(N_MIN, N_MAX, "n");
        inf.readSpace();
        int m = inf.readInt(N_MIN, N_MAX, "m");
        inf.readEoln();

        sum_of_n += n, sum_of_m += m;

        string s = inf.readLine("[Um]{" + to_string(n) + "}", "s");

        for (int i = 0; i < m; i++) {
            int a = inf.readInt(1, n, "a");
            inf.readSpace();
            int b = inf.readInt(a, n, "b");
            inf.readEoln();
        }
    }
    inf.readEof();

    ensuref(sum_of_n <= N_MAX, "sum of n is not over 100 000");
    ensuref(sum_of_m <= N_MAX, "sum of m is not over 100 000");
}
