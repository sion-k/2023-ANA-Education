#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 8;
const int K_MIN = 1, K_MAX = 100;

bool junsik_exists(int n, int m, vector<string>& s) {
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (s[y][x] == '@') {
                return true;
            }
        }
    }

    return false;
}

void validates() {
    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readSpace();
    int m = inf.readInt(N_MIN, N_MAX, "m");
    inf.readEoln();

    vector<string> s(n);
    for (int y = 0; y < n; y++) {
        s[y] = inf.readLine("[#.@\\^]{" + to_string(m) + "}", "si");
    }

    ensuref(junsik_exists(n, m, s), "junsik must exists");

    int k = inf.readInt(K_MIN, K_MAX, "k");
    inf.readEoln();

    string t = inf.readLine("[LRUD]{" + to_string(k) + "}", "t");
}

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int tc = inf.readInt(1, 10000, "tc");
    inf.readEoln();

    while (tc--) {
        validates();
    }

    inf.readEof();
}
