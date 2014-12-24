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

double A, B, C, D;

int main() {
	cin >> A;
	cin >> B;
	cin >> C;

	D = pow(B, 2) - 4 * A * C;
	
	if (A != 0 && D >= 0) {
		printf("R1 = %.5f\n", (-1 * B + sqrt(D)) / (2 * A));
		printf("R2 = %.5f\n", (-1 * B - sqrt(D)) / (2 * A));
	} else {
		printf("Impossivel calcular\n");
	}
	
    return 0;
}
