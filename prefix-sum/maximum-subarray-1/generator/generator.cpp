#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int AI_MIN = -100, AI_MAX = 100;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);
    cout << n << "\n";

    for (int i = 0; i < n; i++) {
        cout << rnd.next(AI_MIN, AI_MAX) << " \n"[i == n - 1];
    }

}
