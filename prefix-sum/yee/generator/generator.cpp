#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);
    int m = n * (1 + n) / 2;
    cout << n << " " << m << "\n";

    vector<char> cand;
    for (int i = 0; i < 26; i++) if ('a' + i != 'e') {
        cand.push_back('a' + i);
    }

    string s;
    for (int i = 0; i < n; i++) {
        if (rnd.next(0, 1)) {
            s.push_back('e');
        } else {
            s.push_back(rnd.any(cand));
        }
    }

    cout << s << "\n";

    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            cout << l << " " << r << "\n";
        }
    }

}
