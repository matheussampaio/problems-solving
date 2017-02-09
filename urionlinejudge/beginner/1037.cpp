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

double N;

int main() {
	cin >> N;
	
	if (N >= 0 && N <= 25) {
		printf("Intervalo [0,25]\n");
	} else if (N > 25 && N <= 50) {
		printf("Intervalo (25,50]\n");
	} else if (N > 50 && N <= 75) {
		printf("Intervalo (50,75]\n");
	} else if (N > 75 && N <= 100) {
		printf("Intervalo (75,100]\n");
	} else {
		printf("Fora de intervalo\n");
	}
	
    return 0;
}
