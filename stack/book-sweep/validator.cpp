#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int M_MIN = 1, M_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    string s = inf.readLine("[a-z]{1,100000}");

    int m = inf.readInt(M_MIN, M_MAX, "m");
    inf.readEoln();

    for (int i = 0; i < m; i++) {
        string op = inf.readToken("(move|tear)", "op");
        inf.readSpace();
        string dir = inf.readToken("(left|right)", "dir");
        inf.readEoln();
    }

    inf.readEof();
}
