#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <sstream>
#include <iterator>

using namespace std;

// Shortcuts for "common" data types in contests
typedef long long ll;
#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL

// To simplify repetitions/loops, Note: define your loop style and stick with it!
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Rep(i, n) for (int i = 1; i <= (n); ++i)
#define REP(i, j, n) for (int i = (j); i<= (n); ++i)
#define clr(x, a) memset(x, (a), sizeof x)

int X, Y, Z, T;

int main() {
    T = -1;

    while (T != 4) {
        cin >> T;

        if (T == 1) {
            X++;
        } else if (T == 2) {
            Y++;
        } else if (T == 3) {
            Z++;
        }
    }

    printf("MUITO OBRIGADO\n");

    printf("Alcool: %d\n", X);
    printf("Gasolina: %d\n", Y);
    printf("Diesel: %d\n", Z);

    return 0;
}
