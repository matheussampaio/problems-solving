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

int N, X, Y, t, sum;

int main() {

	cin >> N;

	while (N--) {
		cin >> X;
		cin >> Y;

		if (X > Y) {
			t = X;
			X = Y;
			Y = t;
		}

		sum = 0;

		REP(i, X + 1, Y - 1) {
			if (i % 2) {
				sum += i;
			}
		}

		printf("%d\n", sum);
	}

    return 0;
}
