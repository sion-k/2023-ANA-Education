#include <bits/stdc++.h>
#include "testlib.h"

#define ALL(x) (x).begin(), (x).end()

using namespace std;

const int N_MIN = 3, N_MAX = 100;
const int AI_MIN = 1, AI_MAX = 100;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int tc = 100;
    cout << tc << "\n";

    while (tc--) {
        int n = rnd.next(N_MIN, N_MAX);
        cout << n << "\n";

        vector<int> cand;
        for (int i = AI_MIN; i <= AI_MAX; i++) {
            cand.push_back(i);
        }

        int p = rnd.any(cand);
        cand.erase(find(ALL(cand), p));

        vector<int> a(n, rnd.any(cand));

        int k = rnd.next(0, n - 1);
        a[k] = p;

        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
}
