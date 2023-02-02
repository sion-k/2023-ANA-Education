#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int XY_MIN = 1, XY_MAX = 100;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int x1 = inf.readInt(XY_MIN, XY_MAX, "x1");
    inf.readSpace();
    int y1 = inf.readInt(XY_MIN, XY_MAX, "y1");
    inf.readSpace();
    int x2 = inf.readInt(XY_MIN, XY_MAX, "x2");
    inf.readSpace();
    int y2 = inf.readInt(XY_MIN, XY_MAX, "y2");

    inf.readEoln();
    inf.readEof();

    pair<int, int> a(x1, y1), b(x2, y2);

    ensuref(a != b, "(x1, y1)과 (x2, y2)는 달라야합니다.");
}
