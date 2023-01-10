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

bool check(string s) {
    int cnt = 0;

    for (int i = 0; i < SIZE(s); i++) {
        if (s[i] == 'U') cnt++;
    }

    return SIZE(s) >= 3 && s[0] == 'U' && cnt == 1;
}

void solve() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        cnt += check(s.substr(a - 1, b - a + 1));
    }

    cout << cnt << "\n";
}

int main() {
    FAST();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
