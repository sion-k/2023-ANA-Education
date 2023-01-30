#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N_MIN = 1, N_MAX = 100;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    string s = inf.readLine();
    ensuref(1 <= s.size() && s.size() <= 100, "문자열 S의 길이는 1 이상 100이하여야 합니다.");

    for (int i = 0; i < s.size(); i++) {
        ensuref(s[i] == ' ' || 'a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z', \
            "문자열 S는 알파벳 대소문자 혹은 공백으로 이루어져야 합니다.");
    }

    inf.readEof();
}
