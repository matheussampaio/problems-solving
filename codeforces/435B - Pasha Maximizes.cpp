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

string line;

void swap(int a, int b) {
    int tmp = line[a];
    line[a] = line[b];
    line[b] = tmp;
}

int main() {

    // freopen("input.txt", "r", stdin);

    int k, x = 0, y, z, w, i;

    cin >> line;
    cin >> k;

    while (k > 0 && x < line.length()) {

        y = -1;
        i = x;

        while (i <= (x + k) && i < line.length() ) {
            z = line[i] - '0';
            if (z > y) {
                y = z;
                w = i;
            }

            i++;
        }

        k -= w - x;

        while (w > x) {
            swap (w - 1, w);
            w--;
        }

        x++;
    }

    cout << line << endl;

    return 0;
}
