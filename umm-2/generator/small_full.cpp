#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 8;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    vector<string> data;
    for (int n = N_MIN; n <= N_MAX; n++) {
        for (int mask = 0; mask < (1 << n); mask++) {
            for (int a = 1; a <= n; a++) {
                for (int b = a; b <= n; b++) {
                    string d = to_string(n) + " " + to_string(1);
                    d.push_back('\n');

                    string s;
                    for (int i = 0; i < n; i++) {
                        s.push_back((mask & (1 << i)) ? 'U' : 'm');
                    }

                    d.append(s);
                    d.push_back('\n');

                    string ab = to_string(a) + " " + to_string(b);
                    d.append(ab);

                    data.push_back(d);
                }
            }
        }
    }

    int p = atoi(argv[1]), q = atoi(argv[2]);

    int start = data.size() / q * p;
    int end = min(data.size() - 1, data.size() / q * (p + 1) - 1);

    int tc = end - start + 1;
    cout << tc << "\n";

    for (int i = start; i <= end; i++) {
        cout << data[i] << "\n";
    }
}
