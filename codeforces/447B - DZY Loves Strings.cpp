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

char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

map<char, int> letters;

string line;

int n, maxn, num;

int main() {

    // freopen("input.txt", "r", stdin);

    cin >> line;

    cin >> n;

    maxn = -1;

    rep(i, 26) {

        scanf("%d", &num);

        letters[alpha[i]] = num;

        if (num > maxn)
            maxn = num;
    }

    int result = 0;

    rep(i, line.length()) {
        result += letters[line[i]] * (i + 1);
    }

    REP(i, line.length() + 1, line.length() + n) {
        result += maxn * i;
    }

    printf("%d\n", result);

    return 0;
}
