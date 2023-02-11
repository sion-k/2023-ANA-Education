#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX / 2) * 2;

    string s;
    int c = 0;

    for (int i = 0; i < n; i++) {
        vector<char> cand;
        if (c + 1 <= n - i) {
            cand.push_back('(');
        }

        if (c > 0) {
            cand.push_back(')');
        }

        s.push_back(rnd.any(cand));
        c = s.back() == '(' ? c + 1 : c - 1;
    }

    cout << s << "\n";
}
