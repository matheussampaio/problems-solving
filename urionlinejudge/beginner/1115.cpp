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

int X, Y;

int main() {

	cin >> X;
	cin >> Y;

	while (X && Y) {

		if (X > 0 && Y > 0) {
			printf("primeiro\n");
		} else if (X < 0 && Y > 0) {
			printf("segundo\n");
		} else if (X < 0 && Y < 0) {
			printf("terceiro\n");
		} else if (X > 0 && Y < 0) {
			printf("quarto\n");
		}

		cin >> X;
		cin >> Y;
	}

    return 0;
}
