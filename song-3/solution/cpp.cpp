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

    vector<long long> b(n);
    for (auto& x : b) {
        cin >> x;
    }

    for (int i = 1; i < n; i++) {
        b[i] += b[i - 1];
    }

    int m;
    cin >> m;

    vector<int> q(m);
    for (auto& x : q) {
        cin >> x;
    }

    int sum = 0;

    for (int i = 0; i < m; i++) {
        q[i] = (q[i] - 1) % b.back() + 1;

        int lo = -1, hi = n - 1;

        while (lo + 1 < hi) {
            int mid = (lo + hi) / 2;

            if (b[mid] >= q[i]) {
                hi = mid;
            } else {
                lo = mid;
            }
        }

        sum = (sum + hi + 1) % MOD;
    }

    cout << sum << "\n";
}
