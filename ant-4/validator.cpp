#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 3, N_MAX = 8;
const int STATUS_MIN = 1, STATUS_MAX = 100;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int tc = inf.readInt(1, 10000, "tc");
    inf.readEoln();

    while (tc--) {
        int n = inf.readInt(N_MIN, N_MAX, "n");
        inf.readSpace();
        int m = inf.readInt(0, n, "m");
        inf.readEoln();

        string s = inf.readLine("[@O#&.]{" + to_string(n) + "}", "s");

        map<char, int> c;
        for (int i = 0; i < n; i++) {
            c[s[i]]++;
        }

        ensuref(c['@'] == 1, "Junsik must occur once");
        ensuref(1 <= c['O'], "Exit must occur at least once");
        ensuref(c['&'] == 1, "Monster must occur once");

        int atk_j = inf.readInt(STATUS_MIN, STATUS_MAX, "atk_j");
        inf.readSpace();
        int hp_j = inf.readInt(STATUS_MIN, STATUS_MAX, "hp_j");
        inf.readEoln();

        int atk_m = inf.readInt(STATUS_MIN, STATUS_MAX, "atk_m");
        inf.readSpace();
        int hp_m = inf.readInt(STATUS_MIN, STATUS_MAX, "hp_m");
        inf.readEoln();
    }

    inf.readEof();
}
