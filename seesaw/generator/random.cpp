#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100;
const int AI_MIN = 1, AI_MAX = 10000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = rnd.next(AI_MIN, AI_MAX);
    }

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
    }
}
