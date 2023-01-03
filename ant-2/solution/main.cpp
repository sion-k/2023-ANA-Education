#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a, b;
    for (int i = 0; i < n; i++) {
        if (s[i] == '@') {
            a = i;
        }

        if (s[i] == 'O') {
            b = i;
        }
    }

    int cnt = 0;

    for (int i = min(a, b); i <= max(a, b); i++) {
        if (s[i] == '#') {
            cnt++;
        }
    }

    cout << (cnt <= 1 ? "HAHA!" : "HELP!") << "\n";
}
