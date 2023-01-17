#include <bits/stdc++.h>
#include "testlib.h"

#define ALL(x) (x).begin(), (x).end()

using namespace std;

const int N_MIN = 1, N_MAX = 10;
const int M_MIN = 10000, M_MAX = 10000;
const int BI_MIN = 1, BI_MAX = 2;
const int QI_MIN = 1, QI_MAX = 10000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);
    cout << n << "\n";

    for (int i = 0; i < n; i++) {
        string s;
        s.push_back('a' + i);
        s.push_back(' ');
        s.push_back('A' + i);

        cout << s << "\n";
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = rnd.next(BI_MIN, BI_MAX);
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << "\n";
    }

    int sum = accumulate(ALL(b), 0);

    int m = rnd.next(M_MIN, M_MAX);
    cout << m << "\n";

    vector<int> q(m);
    for (int i = 0; i < m; i++) {
        q[i] = i + 1;
    }

    sort(ALL(q));

    for (int i = 0; i < m; i++) {
        cout << q[i] << "\n";
    }
}
