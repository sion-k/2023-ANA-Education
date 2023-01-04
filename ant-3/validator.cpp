#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 3, N_MAX = 8;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int tc = inf.readInt(1, 10000, "tc");
    inf.readEoln();

    while (tc--) {
        int n = inf.readInt(N_MIN, N_MAX, "n");
        inf.readSpace();
        int m = inf.readInt(0, n - 3, "m");
        inf.readEoln();

        string s = inf.readLine("[@O#G.]{" + to_string(n) + "}", "s");

        map<char, int> c;
        for (int i = 0; i < n; i++) {
            c[s[i]]++;
        }

        ensuref(c['@'] == 1, "Junsik must occur once");
        ensuref(c['O'] == 1, "Exit must occur once");
        ensuref(c['G'] == 1, "Gauntlet must occur once");
    }

    inf.readEof();
}
