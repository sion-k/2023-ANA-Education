#include <bits/stdc++.h>
#include "testlib.h"

#define FAST() cin.tie(0)->sync_with_stdio(0)
#define OPEN(t) freopen("data.txt", (t), (t == "r" ? stdin : stdout))
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) (int)((x).size())

#define deb(x) cout << #x << " : " << (x) << "\n"
#define deb_pair(x, y) cout << "(" << #x << ", " << #y << ") : (" << (x) << ", " << (y) << ")\n"
#define deb_triplet(x, y, z) cout << "(" << #x << ", " << #y << ", " << #z << ") : (" << (x) << ", " << (y) << ", " << (z) << ")\n"
#define deb_tuple(s) for (int i = 0; i < SIZE(s); i++) cout << s[i] << " \n"[i == SIZE(s) - 1];

using namespace std;

const int T_MIN = 1, T_MAX = 100;
const int N_MIN = 1, N_MAX = 50;
const int AI_MIN = 0, AI_MAX = 10;
const int M_MIN = 1, M_MAX = 50;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int t = T_MAX;
    cout << t << "\n";

    while (t--) {
        int n = rnd.next(N_MIN, N_MAX);
        cout << n << "\n";

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            a[i] = rnd.next(AI_MIN, AI_MAX);
        }

        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        if (sum == 0) {
            a[0]++;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }

        int m = rnd.next(M_MIN, M_MAX);
        cout << m << "\n";

        for (int i = 0; i < m; i++) {
            vector<int> cand;
            for (int j = 0; j < n; j++) {
                if (a[j] > 0) {
                    cand.push_back(j + 1);
                }
            }

            int u = cand[rnd.next(0, SIZE(cand) - 1)];
            int v = rnd.next(1, n);
            cout << u << " " << v << "\n";

            u--, v--;
            a[u]--; a[v]++;
        }
    }

}
