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

int N;
double X, sum;

int main() {

	while (true) {
		N = 0;
		sum = 0;

		while (N < 2) {
			cin >> X;

			if (X >= 0 && X <= 10) {
				N++;
				sum += X;
			} else {
				printf("nota invalida\n");
			}
		}

		printf("media = %.2f\n", sum / 2);

		while (true) {
			printf("novo calculo (1-sim 2-nao)\n");
			cin >> X;

			if (X == 1) {
				break;
			} else if (X == 2) {
				return 0;
			}
		}
	}

	return 0;
}
