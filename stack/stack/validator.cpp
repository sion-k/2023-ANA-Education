#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readEoln();

    bool flag = false;
    for (int i = 0; i < n; i++) {
        string op = inf.readToken("(push|pop)", "op");

        if (op == "push") {
            inf.readSpace();
            int x = inf.readInt(N_MIN, N_MAX, "x");
        } else {
            flag = true;
        }

        inf.readEoln();
    }

    inf.readEof();

    ensuref(flag, "pop은 적어도 하나 주어져야 합니다.");
}
