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

    while (true) {
        int j = 0;

        // a[i - 1] > a[i]를 만족하는 가장 앞서는 a[i]를 찾는다.
        for (int i = 1; i < SIZE(a); i++) {
            if (a[i - 1] > a[i]) {
                j = i;
                break;
            }
        }

        // 찾았다면 제거
        if (j != 0) {
            a.erase(a.begin() + j);
        } else {
            break;
        }
    }

    for (int i = 0; i < SIZE(a); i++) {
        cout << a[i] << " \n"[i == SIZE(a) - 1];
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
