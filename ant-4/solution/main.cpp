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

bool beatable(int atk_j, int hp_j, int atk_m, int hp_m) {
    while (true) {
        hp_m -= atk_j;
        if (hp_m <= 0) return true;

        hp_j -= atk_m;
        if (hp_j <= 0) return false;
    }

    return false;
}

bool rechable(string& s, int m, int atk_j, int hp_j, int atk_m, int hp_m) {
    int n = SIZE(s);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'O') return true;
        if (s[i] == '&' && !beatable(atk_j, hp_j, atk_m, hp_m)) {
            return false;
        }
        if (s[i] == '#') {
            if (m == 0) return false;
            m--;
        }
    }

    return false;
}

void solve() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    map<int, int> c;
    for (int i = 0; i < n; i++) {
        c[s[i]] = i;
    }

    int atk_j, hp_j, atk_m, hp_m;
    cin >> atk_j >> hp_j >> atk_m >> hp_m;

    string left = s.substr(0, c['@']);
    reverse(ALL(left));

    string right = s.substr(c['@'] + 1);

    bool flag = rechable(left, m, atk_j, hp_j, atk_m, hp_m) || rechable(right, m, atk_j, hp_j, atk_m, hp_m);
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
