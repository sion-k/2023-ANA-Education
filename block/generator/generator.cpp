#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int c = atoi(argv[1]);

    cout << (c + 9) / 10 << " " << ((c - 1) % 10) + 1 << "\n";
}
