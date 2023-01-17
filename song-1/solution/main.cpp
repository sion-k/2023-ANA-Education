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

int main() {
    FAST();

    int n;
    cin >> n;
    cin.ignore();

    vector<string> a(n);
    for (auto& x : a) {
        getline(cin, x);
    }

    vector<int> b(n);
    for (auto& x : b) {
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

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;

        cout << a[t[q]] << "\n";
    }
}
