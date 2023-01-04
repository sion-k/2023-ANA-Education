#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 2, N_MAX = 8;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    set<string> data;
    for (int n = N_MIN; n <= N_MAX; n++) {
        for (int m = 0; m <= n - 2; m++) {
            for (int b = 0; b < (1 << n); b++) {
                string s;
                for (int i = 0; i < n; i++) {
                    s.push_back((b & (1 << i)) ? '#' : '.');
                }

                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i != j) {
                            string d(to_string(n) + " " + to_string(m));
                            d.push_back('\n');

                            string t = s;
                            t[i] = '@', t[j] = 'O';
                            d.append(t);

                            data.insert(d);
                        }
                    }
                }
            }
        }
    }

    vector<string> testcases;
    for (auto& d : data) {
        testcases.push_back(d);
    }

    int p = atoi(argv[1]), q = atoi(argv[2]);

    int start = testcases.size() / q * p;
    int end = min(testcases.size() - 1, testcases.size() / q * (p + 1) - 1);

    int tc = end - start + 1;
    cout << tc << "\n";

    for (int i = start; i <= end; i++) {
        cout << testcases[i] << "\n";
    }
}
