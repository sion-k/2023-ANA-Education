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
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    map<char, int> c;
    for (int i = 0; i < n; i++) {
        c[s[i]] = i;
    }

    int wall = 0;
    for (int i = min(c['@'], c['O']); i <= max(c['@'], c['O']); i++) {
        if (s[i] == '#') {
            wall++;
        }
    }

    bool flag = wall <= m;

    wall = 0;
    for (int i = min(c['@'], c['G']); i <= max(c['@'], c['G']); i++) {
        if (s[i] == '#') {
            wall++;
        }
    }

    flag |= wall <= m;

    cout << (flag ? "HAHA!" : "HELP!") << "\n";
}

int main() {
    FAST();

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
