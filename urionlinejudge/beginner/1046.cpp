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

int A, B;

int main() {
	cin >> A;
	cin >> B;
	
	if (A == B || A - B == 24) {
		printf("O JOGO DUROU 24 HORA(S)\n");
	} else if (A < B) {
		printf("O JOGO DUROU %d HORA(S)\n", abs(A - B));
	} else {
		printf("O JOGO DUROU %d HORA(S)\n", 24 - abs(A - B));
	} 
	
    return 0;
}
