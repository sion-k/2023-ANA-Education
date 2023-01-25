#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 10'000;
const int AB_MIN = 1, AB_MAX = 100;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = N_MAX;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        a[i] = rnd.next(AB_MIN, AB_MAX);
        b[i] = rnd.next(AB_MIN, AB_MAX);
    }

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " " << b[i] << "\n";
    }
}
