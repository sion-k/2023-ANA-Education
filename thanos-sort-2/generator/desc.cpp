#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100'000;
const int AI_MIN = 1, AI_MAX = 1'000'000'000;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int tc = 1;
    cout << tc << "\n";

    while (tc--) {
        int n = N_MAX;
        cout << n << "\n";

        for (int i = n; i >= 1; i--) {
            cout << i << " \n"[i == 1];
        }
    }

}
