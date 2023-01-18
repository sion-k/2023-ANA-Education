#include <bits/stdc++.h>
#include "testlib.h"

#define ALL(x) (x).begin(), (x).end()

using namespace std;

const int N_MIN = 3, N_MAX = 100;
const int AI_MIN = 1, AI_MAX = 100;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int tc = inf.readInt(1, 100);
    inf.readEoln();

    while (tc--) {
        int n = inf.readInt(N_MIN, N_MAX, "n");
        inf.readEoln();

        vector<int> a = inf.readInts(n, AI_MIN, AI_MAX, "a");
        inf.readEoln();

        map<int, int> c;
        for (int i = 0; i < n; i++) {
            c[a[i]]++;
        }

        ensuref(c.size() == 2, "두 종류의 원소만 존재해야 합니다.");
        ensuref(c.begin()->second == 1 || (++c.begin())->second == 1, "두 종류 원소중 하나는 한 번만 등장해야 합니다.");
    }

    inf.readEof();
}
