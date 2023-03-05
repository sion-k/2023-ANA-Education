#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 50;
const int M_MIN = 1, M_MAX = 50;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    int m = rnd.next(M_MIN, M_MAX);

    cout << n << " " << m << "\n";

    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s[i].push_back(rnd.next(0, 1) ? '#' : '.');
        }
    }

    s[0][0] = '.';

    for (int i = 0; i < n; i++) {
        cout << s[i] << "\n";
    }
}
