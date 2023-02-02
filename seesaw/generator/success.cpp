#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 3, N_MAX = 100;
const int AI_MIN = 1, AI_MAX = 10000;

// 길이가 n이고 합이 s인 배열 반환
vector<int> f(int n, int s) {
    vector<int> ret(n, 1);
    s -= n;

    while (s) {
        int t = rnd.next(0, n - 1);

        ret[t]++;
        s--;
    }

    return ret;
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(N_MIN, N_MAX);

    int left = rnd.next(1, n - 2);
    int right = n - (left + 1);

    int s = rnd.next(max(left, right), AI_MAX);

    vector<int> l = f(left, s), r = f(right, s);

    vector<int> a;
    a.insert(a.end(), l.begin(), l.end());
    a.push_back(1);
    a.insert(a.end(), r.begin(), r.end());

    cout << n << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
    }
}
