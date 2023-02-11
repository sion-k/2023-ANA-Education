#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100'000;
const int M_MIN = 1, M_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);

    string s;
    for (int i = 0; i < n; i++) {
        s.push_back('a' + rnd.next(0, 25));
    }
    cout << s << "\n";

    vector<string> ops;
    ops.push_back("move left");
    ops.push_back("move right");
    ops.push_back("tear left");
    ops.push_back("tear right");

    int m = rnd.next(M_MIN, M_MAX);
    cout << m << "\n";

    for (int i = 0; i < m; i++) {
        cout << rnd.any(ops) << "\n";
    }
}
