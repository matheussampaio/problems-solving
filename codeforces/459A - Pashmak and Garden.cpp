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

using namespace std;

int v[20];

double dist(int xa, int ya, int xb, int yb) {
    return sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
}

int main() {

    // freopen("input.txt", "r", stdin);

    cin >> v[0];
    cin >> v[1];
    cin >> v[2];
    cin >> v[3];

    int xa = v[0], ya = v[1], xb = v[2], yb = v[3];

    if ((xa == xb) || (ya == yb)) {

        xa = min(v[0], v[2]);
        ya = min(v[1], v[3]);
        xb = max(v[0], v[2]);
        yb = max(v[1], v[3]);

        int d = dist(xa, ya, xb, yb);

        if (xa + d != xb) {
            printf("%d %d", xa + d, ya);
        } else if (ya + d != yb) {
            printf("%d %d", xa, ya + d);
        }

        printf(" %d %d\n", xa + d, ya + d);

    } else {

        int xc = xb;
        int yc = ya;

        if (dist(xc, yc, xa, ya) != dist(xc, yc, xb, yb)) {
            cout << "-1" << endl;
        } else {
            printf("%d %d %d %d\n", xa, yb, xc, yc);
        }
    }

    return 0;
}
