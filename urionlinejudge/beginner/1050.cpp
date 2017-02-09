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

int A;

int main() {
	cin >> A;

	if (A == 61) {
		printf("Brasilia\n");
	} else if (A == 71) {
		printf("Salvador\n");
	} else if (A == 11) {
		printf("Sao Paulo\n");
	} else if (A == 21) {
		printf("Rio de Janeiro\n");
	} else if (A == 32) {
		printf("Juiz de Fora\n");
	} else if (A == 19) {
		printf("Campinas\n");
	} else if (A == 27) {
		printf("Vitoria\n");
	} else if (A == 31) {
		printf("Belo Horizonte\n");
	} else {
		printf("DDD nao cadastrado\n");
	}
	
    return 0;
}
