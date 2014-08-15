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

int main() {

    int x1, y1, x2, y2, x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 != x2 && y1 != y2) {
        if (abs(x1 - x2) != abs(y1 - y2)) {
            printf("-1\n");
        } else {
            printf("%d %d %d %d\n", x1, y2, x2, y1);
        }
    } else if (y1 == y2) {
        int dist = abs(x1 - x2);

        printf("%d %d %d %d\n", x1, y1 + dist, x2, y2 + dist);
    } else if (x1 == x2) {
        int dist = abs(y1 - y2);
        printf("%d %d %d %d\n", x1 + dist, y1, x2 + dist, y2);
    } else {
        printf("-1\n");
    }

    return 0;
}
