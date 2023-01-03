#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 20;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readEoln();

    string s = inf.readLine("[@O#.]{" + to_string(n) + "}", "s");
    inf.readEof();

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '@') {
            cnt1++;
        }
        if (s[i] == 'O') {
            cnt2++;
        }
    }

    ensuref(cnt1 == 1, "Junsik must occur once");
    ensuref(cnt2 == 1, "Exit must occur once");
}
