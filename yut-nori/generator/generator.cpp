#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int p = atoi(argv[1]);

    for (int i = 0; i < 4; i++) {
        cout << ((p & (1 << i)) > 0);
    }

    cout << "\n";
}
