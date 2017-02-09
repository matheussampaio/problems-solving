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

int total, totalC, totalR, totalS, n, N;
char c;

int main() {

	cin >> N;

	rep(i, N) {
		cin >> n;
		cin >> c;

		total += n;

		if (c == 'C') {
			totalC += n;
		} else if (c == 'R') {
			totalR += n;
		} else if (c == 'S') {
			totalS += n;
		}
	}

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", totalC);
	printf("Total de ratos: %d\n", totalR);
	printf("Total de sapos: %d\n", totalS);
	printf("Percentual de coelhos: %.2f %%\n", (totalC * 100.0) / total);
	printf("Percentual de ratos: %.2f %%\n", (totalR * 100.0) / total);
	printf("Percentual de sapos: %.2f %%\n", (totalS  * 100.0) / total);

    return 0;
}
