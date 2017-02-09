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

double A;

int main() {
	cin >> A;

	if (A <= 400) {
		printf("Novo salario: %.2f\n", A * 1.15);
		printf("Reajuste ganho: %.2f\n", A * 1.15 - A);
		printf("Em percentual: 15 %%\n");
	} else if (A <= 800) {
		printf("Novo salario: %.2f\n", A * 1.12);
		printf("Reajuste ganho: %.2f\n", A * 1.12 - A);
		printf("Em percentual: 12 %%\n");
	} else if (A <= 1200) {
		printf("Novo salario: %.2f\n", A * 1.10);
		printf("Reajuste ganho: %.2f\n", A * 1.10- A);
		printf("Em percentual: 10 %%\n");
	} else if (A <= 2000) {
		printf("Novo salario: %.2f\n", A * 1.07);
		printf("Reajuste ganho: %.2f\n", A * 1.07 - A);
		printf("Em percentual: 7 %%\n");
	} else {
		printf("Novo salario: %.2f\n", A * 1.04);
		printf("Reajuste ganho: %.2f\n", A * 1.04 - A);
		printf("Em percentual: 4 %%\n");
	}
	
    return 0;
}
