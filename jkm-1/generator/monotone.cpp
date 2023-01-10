#include <bits/stdc++.h>
#include "testlib.h"

#define ALL(x) (x).begin(), (x).end()

using namespace std;

const int N_MIN = 1, N_MAX = 10;
const int M_MIN = 1, M_MAX = 100;
const int AI_MIN = 1, AI_MAX = 100;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    bool dir = atoi(argv[1]);

    int tc = 100;
    cout << tc << "\n";

    while (tc--) {
        int n = rnd.next(N_MIN, N_MAX);
        int m = rnd.next(M_MIN, M_MAX);
        int k = rnd.next(1, n);

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = rnd.next(AI_MIN, AI_MAX);
        }

        sort(ALL(a));

        if (dir) {
            reverse(ALL(a));
        }

        cout << n << " " << m << " " << k << "\n";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
}
