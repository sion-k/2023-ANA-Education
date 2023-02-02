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

    vector<long long> q(m);
    for (auto& x : q) {
        cin >> x;
    }

    long long length = accumulate(b.begin(), b.end(), 0);
    int ret = 0;

    for (int i = 0; i < m; i++) {
        q[i] = (q[i] - 1) % length + 1;

        long long sum = 0;
        int index = 0;

        for (int j = 0; j < n; j++) {
            sum += b[j];
            if (q[i] <= sum) {
                index = j;
                break;
            }
        }

        ret = (ret + index + 1) % MOD;
    }

    cout << ret << "\n";
}
