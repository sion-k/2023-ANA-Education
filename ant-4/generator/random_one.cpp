#include <bits/stdc++.h>
#include "testlib.h"

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

// 완전 랜덤

const int N_MIN = 3, N_MAX = 8;
const int STATUS_MIN = 1, STATUS_MAX = 100;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int tc = 1;
    cout << tc << "\n";

    while (tc--) {
        int n = rnd.next(N_MIN, N_MAX);

        int mask = rnd.next(1, (1 << n) - 1);

        string s(n, '.');

        // 준식이 위치
        int pos_j = rnd.next(0, n - 1);
        s[pos_j] = '@';

        // 몬스터의 위치
        int pos_m = rnd.next(0, n - 2);
        if (pos_m >= pos_j) pos_m++;
        s[pos_m] = '&';

        // 탈출구의 위치
        vector<int> pos_exit;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                pos_exit.push_back(i);
            }
        }

        // 최소 한 개의 탈출구
        int pos_e = pos_exit[rnd.next(0, SIZE(pos_exit) - 1)];
        s[pos_e] = 'O';

        // 추가적인 탈출구
        for (int i = 0; i < n; i++) {
            if (s[i] == '.' && rnd.next(1, 10) == 1) {
                s[i] = 'O';
            }
        }

        // 벽 세우기
        for (int i = 0; i < n; i++) {
            if (s[i] == '.' && rnd.next(0, 1)) {
                s[i] = '#';
            }
        }

        int atk_j = rnd.next(STATUS_MIN, STATUS_MAX);
        int hp_j = rnd.next(STATUS_MIN, STATUS_MAX);
        int atk_m = rnd.next(STATUS_MIN, STATUS_MAX);
        int hp_m = rnd.next(STATUS_MIN, STATUS_MAX);

        // M은 최대 벽의 개수
        map<int, int> c;
        for (int i = 0; i < n; i++) {
            c[s[i]]++;
        }

        int m = rnd.next(0, c['#']);

        cout << n << " " << m << "\n";
        cout << s << "\n";
        cout << atk_j << " " << hp_j << "\n";
        cout << atk_m << " " << hp_m << "\n";
    }
}
