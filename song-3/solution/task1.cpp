#include <bits/stdc++.h>

#define FAST() cin.tie(0)->sync_with_stdio(0)
#define OPEN(t) freopen("data.txt", (t), (t == "r" ? stdin : stdout))
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) (int)((x).size())

#define deb(x) cout << #x << " : " << (x) << "\n"
#define deb_pair(x, y) cout << "(" << #x << ", " << #y << ") : (" << (x) << ", " << (y) << ")\n"
#define deb_triplet(x, y, z) cout << "(" << #x << ", " << #y << ", " << #z << ") : (" << (x) << ", " << (y) << ", " << (z) << ")\n"
#define deb_tuple(s) \
    cout << "["; \
    for (int __i = 0; __i < SIZE(s); __i++) { \
        cout << s[__i]; \
        if (__i != SIZE(s) - 1) cout << ", "; \
    } \
    cout << "]\n";

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    FAST();

    int n;
    cin >> n;

    vector<int> b(n);
    for (auto& x : b) {
        cin >> x;
    }

    int m;
    cin >> m;

    vector<int> q(m);
    for (auto& x : q) {
        cin >> x;
    }

    vector<int> t(3001);
    int p = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b[i]; j++) {
            t[p] = i;
            p++;
        }
    }

    p--;

    int sum = 0;

    for (int i = 0; i < m; i++) {
        int x = t[(q[i] - 1) % p + 1];

        sum = (sum + x + 1) % MOD;
    }

    cout << sum << "\n";
}
