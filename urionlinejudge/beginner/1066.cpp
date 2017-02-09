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

int A, B, C, D, E;

int main() {
	
	rep(i, 5) {
		cin >> A;
		
		if (A % 2 == 0) {
			B++;
		} else {
			C++;
		}
		
		if (A > 0) {
			D++;
		} 
		
		if (A < 0) {
			E++;
		}
	}
	
	printf("%d valor(es) par(es)\n", B);
	printf("%d valor(es) impar(es)\n", C);
	printf("%d valor(es) positivo(s)\n", D);
	printf("%d valor(es) negativo(s)\n", E);
	
    return 0;
}
