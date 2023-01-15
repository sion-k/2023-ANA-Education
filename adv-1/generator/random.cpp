#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 8;
const int K_MIN = 1, K_MAX = 100;

void generate();
void print(int n, int m, vector<string>& s, int k, string t);

void generate() {
    int n = rnd.next(N_MIN, N_MAX);
    int m = rnd.next(N_MIN, N_MAX);

    vector<string> s(n, string(m, '.'));
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            s[y][x] = rnd.next(1, 4) == 1 ? '#' : '.';
        }
    }

    s[rnd.next(0, n - 1)][rnd.next(0, m - 1)] = '@';

    int k = rnd.next(K_MIN, K_MAX);
    string t(k, 'L');
    for (int i = 0; i < k; i++) {
        t[i] = "LRUD"[rnd.next(0, 3)];
    }

    print(n, m, s, k, t);
}

void print(int n, int m, vector<string>& s, int k, string t) {
    cout << n << " " << m << "\n";

    for (int y = 0; y < n; y++) {
        cout << s[y] << "\n";
    }

    cout << k << "\n";
    cout << t << "\n";
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int tc = 100;
    cout << tc << "\n";

    while (tc--) {
        generate();
    }
}
