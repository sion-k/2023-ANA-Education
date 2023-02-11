#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);

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

    vector<int> pre(n), suf(n);
    for (int i = 0; i < n; i++) {
        pre[i] = s[i] == '(';

        if (i - 1 >= 0) {
            pre[i] += pre[i - 1];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        suf[i] = s[i] == ')';

        if (i + 1 < n) {
            suf[i] += suf[i + 1];
        }
    }

    for (int i = 1; i < n - 2; i++) {
        if (pre[i] == suf[i + 1]) {
            s[i + 1] = s[i + 1] == '(' ? ')' : '(';
        }
    }

    cout << s << "\n";
}
