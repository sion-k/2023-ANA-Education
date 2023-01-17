#include <bits/stdc++.h>
#include "testlib.h"

#define ALL(x) (x).begin(), (x).end()

using namespace std;

const int N_MIN = 1, N_MAX = 10;
const int M_MIN = 1, M_MAX = 10000;
const int BI_MIN = 1, BI_MAX = 300;
const int QI_MIN = 1, QI_MAX = 10000;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(N_MIN, N_MAX, "n");
    inf.readEoln();

    for (int i = 0; i < n; i++) {
        string ai = inf.readLine();

        bool check = true;
        for (int j = 0; j < ai.length(); j++) {
            if ('a' <= ai[j] && ai[j] <= 'z' || 'A' <= ai[j] && ai[j] <= 'Z' || ai[j] == ' ') {

            } else {
                check = false;
            }
        }

        ensuref(check, "ai must consist of alphabet or blank");
        ensuref(ai[0] != ' ' && ai.back() != ' ', "first and last no blanks");
    }

    for (int i = 0; i < n; i++) {
        int bi = inf.readInt(BI_MIN, BI_MAX, "bi");
        inf.readEoln();
    }

    int m = inf.readInt(M_MIN, M_MAX, "m");
    inf.readEoln();

    vector<int> q;
    for (int i = 0; i < m; i++) {
        int qi = inf.readInt(QI_MIN, QI_MAX, "qi");
        inf.readEoln();

        q.push_back(qi);
    }

    inf.readEof();

    vector<int> qq = q;
    sort(ALL(qq));

    ensuref(q == qq, "q must be sorted");
}
