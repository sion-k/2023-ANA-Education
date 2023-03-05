#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 50;
const int M_MIN = 1, M_MAX = 50;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    int m = rnd.next(M_MIN, M_MAX);

    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s[i].push_back(rnd.next(0, 1) ? '#' : '.');
        }
    }

    int x = rnd.next(1, n);
    int y = rnd.next(1, m);

    if (s[x - 1][y - 1] == '#') {
        s[x - 1][y - 1] = '.';
    }

    cout << n << " " << m << "\n";
    cout << x << " " << y << "\n";

    for (int i = 0; i < n; i++) {
        cout << s[i] << "\n";
    }
}
