#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 200'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int tc = 1;
    cout << tc << "\n";

    int n = N_MAX, m = N_MAX;
    cout << n << " " << m << "\n";

    string s(N_MAX, 'm');
    for (int i = 0; i < n; i += 20000) {
        s[i] = 'U';
    }

    cout << s << "\n";

    for (int i = 0; i < m; i++) {
        int a = 20000 * rnd.next(0, 9);
        int b = a + 20000 - 1;

        // 답을 0으로 만듬
        if (rnd.next(0, 1)) {
            // a 건드리기
            if (a && rnd.next(0, 10) == 0) {
                a--;
                // b 건드리기
            } else if (b + 1 < n && rnd.next(0, 1)) {
                b++;
            } else {
                a++;
            }
        }

        cout << a + 1 << " " << b + 1 << "\n";
    }
}
