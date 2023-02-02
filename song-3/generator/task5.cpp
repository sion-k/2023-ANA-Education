#include <bits/stdc++.h>
#include "testlib.h"

#define ALL(x) (x).begin(), (x).end()

using namespace std;

const int N_MIN = 1, N_MAX = 100'000;
const int M_MIN = 1, M_MAX = 100'000;
const int BI_MIN = 1, BI_MAX = 10;
const int QI_MIN = 1, QI_MAX = 1'000'000'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = N_MAX;

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = rnd.next(BI_MIN, BI_MAX);
    }

    int m = M_MAX;

    vector<int> q(m);
    for (int i = 0; i < m; i++) {
        q[i] = rnd.next(QI_MIN, QI_MAX);
    }

    sort(ALL(q));

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " \n"[i == n - 1];
    }

    cout << m << "\n";
    for (int i = 0; i < m; i++) {
        cout << q[i] << " \n"[i == m - 1];
    }
}
