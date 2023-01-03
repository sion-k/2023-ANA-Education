#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 20;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    cout << n << "\n";

    string s = inf.readLine("[@O#\\.]{" + to_string(n) + "}", "s");

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '@') {
            cnt1++;
        }
        if (s[i] == '#') {
            cnt2++;
        }
    }
}
