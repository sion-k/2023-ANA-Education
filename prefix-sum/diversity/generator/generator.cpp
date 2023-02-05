#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, argv[1] ? atoi(argv[1]) : N_MAX);
    cout << n << "\n";

    string s;
    for (int i = 0; i < n; i++) {
        s.push_back(rnd.next(0, 25) + 'a');
    }

    cout << s << "\n";

}
