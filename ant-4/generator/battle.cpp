#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

// 전투가 정확한지 확인
// 3 0
// @&O
// x y
// a b

const int N_MIN = 3, N_MAX = 8;
const int STATUS_MIN = 1, STATUS_MAX = 100;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int tc = 1000;
    cout << tc << "\n";

    while (tc--) {
        int n = 3, m = 0;
        cout << n << " " << m << "\n";

        cout << "@&O" << "\n";

        int atk_j = rnd.next(STATUS_MIN, STATUS_MAX);
        int hp_j = rnd.next(STATUS_MIN, STATUS_MAX);
        int atk_m = rnd.next(STATUS_MIN, STATUS_MAX);
        int hp_m = rnd.next(STATUS_MIN, STATUS_MAX);

        cout << atk_j << " " << hp_j << "\n";
        cout << atk_m << " " << hp_m << "\n";
    }
}
