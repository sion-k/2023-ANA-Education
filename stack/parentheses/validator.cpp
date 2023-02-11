#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    string s = inf.readLine("[\\(\\)]{1,100}", s);
    inf.readEof();
}
