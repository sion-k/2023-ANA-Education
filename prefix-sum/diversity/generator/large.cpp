#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 100'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = N_MAX;
    cout << n << "\n";

    vector<char> cand;
    for (int i = 0; i < 26; i++) {
        if (rnd.next(0, 1)) {
            cand.push_back(i + 'a');
        }
    }

    string s;
    for (int i = 0; i < n; i++) {
        s.push_back(rnd.any(cand));
    }

    cout << s << "\n";

}
