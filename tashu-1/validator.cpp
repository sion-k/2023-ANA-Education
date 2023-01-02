#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int T_MIN = 1, T_MAX = 100;
const int N_MIN = 1, N_MAX = 50;
const int AI_MIN = 0, AI_MAX = 10;
const int M_MIN = 1, M_MAX = 50;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int t = inf.readInt(T_MIN, T_MAX, "t");
    inf.readEoln();

    while (t--) {
        int n = inf.readInt(N_MIN, N_MAX, "n");
        inf.readEoln();

        vector<int> a = inf.readInts(n, AI_MIN, AI_MAX, "a");
        inf.readEoln();

        int m = inf.readInt(M_MIN, M_MAX, "m");
        inf.readEoln();

        for (int i = 0; i < m; i++) {
            vector<int> b = inf.readInts(2, N_MIN, N_MAX, "u v");
            inf.readEoln();

            int u = b[0];
            int v = b[1];
            u--; v--;

            inf.ensuref(a[u] > 0, "u번째 대여소는 비어있지 않아야 합니다");
            a[u]--; a[v]++;
        }
    }

    inf.readEof();
}
