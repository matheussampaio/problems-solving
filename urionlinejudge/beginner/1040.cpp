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

double N1, N2, N3, N4, M, E, MF;

int main() {
	cin >> N1;
	cin >> N2;
	cin >> N3;
	cin >> N4;
	cin >> E;
	
	M = 0.2 * N1 + 0.3 * N2 + 0.4 * N3 + 0.1 * N4;
	
	printf("Media: %.1f\n", M);
	
	if (M >= 7.0) {
		printf("Aluno aprovado.\n");
	} else if (M >= 5) {
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n", E);
		
		MF = (M + E) / 2;
		
		if (MF >= 5) {
			printf("Aluno aprovado.\n");
		} else {
			printf("Aluno reprovado.\n");
		}
		
		printf("Media final: %.1f\n", MF);
		
	} else {
		printf("Aluno reprovado.\n");
	}
	
    return 0;
}
