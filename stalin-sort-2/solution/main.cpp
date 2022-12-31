#include <bits/stdc++.h>

#define FAST() cin.tie(0)->sync_with_stdio(0)
#define OPEN(t) freopen("data.txt", (t), (t == "r" ? stdin : stdout))
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) (int)((x).size())

#define deb(x) cout << #x << " : " << (x) << "\n"
#define deb_pair(x, y) cout << "(" << #x << ", " << #y << ") : (" << (x) << ", " << (y) << ")\n"
#define deb_triplet(x, y, z) cout << "(" << #x << ", " << #y << ", " << #z << ") : (" << (x) << ", " << (y) << ", " << (z) << ")\n"
#define deb_tuple(s) for (int i = 0; i < SIZE(s); i++) cout << s[i] << " \n"[i == SIZE(s) - 1];

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto& x : a) {
        cin >> x;
    }

    vector<int> b;

    for (int i = 0; i < n; i++) {
        if (b.empty() || b.back() <= a[i]) {
            b.push_back(a[i]);
        }
    }

    for (int i = 0; i < SIZE(b); i++) {
        cout << b[i] << " \n"[i == SIZE(b) - 1];
    }
}

int main() {
    FAST();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
