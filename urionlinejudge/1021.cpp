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

double m, notas[6] = {100, 50, 20, 10, 5, 2}, moedas[6] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};

int main() {
	cin >> m;
	
	printf("NOTAS:\n");
	rep(i, 6) {
		printf("%d nota(s) de R$ %.2f\n", (int) (m / notas[i]), notas[i]);
		m = fmod(m, notas[i]);
	}
	printf("MOEDAS:\n");
	rep(i, 6) {
		printf("%d moeda(s) de R$ %.2f\n", (int) (m / moedas[i]), moedas[i]);
		m = fmod(m, moedas[i]);
	}
    return 0;
}
