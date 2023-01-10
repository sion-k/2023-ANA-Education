#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

// N의 길이에 가까운 쿼리가 들어온다
// 대부분 정답은 0이지만 1인게 딱 하나 있음
const int N_MIN = 1, N_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int tc = 1;
    int n = N_MAX, m = N_MAX;
    string s(N_MAX, 'm');
    vector<pair<int, int>> q;

    for (int i = 0; i < m - 1; i++) {
        int a = rnd.next(1, 100);
        int b = rnd.next(n - 99, n);

        q.emplace_back(a, b);
    }

    int p = rnd.next(101, n - 100);
    s[p - 1] = 'U';
    q.emplace_back(p, p + 3);

    cout << tc << "\n";
    cout << n << " " << m << "\n";
    cout << s << "\n";
    for (int i = 0; i < m; i++) {
        cout << q[i].first << " " << q[i].second << "\n";
    }

}
