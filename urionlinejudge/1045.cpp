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

double A, B, C, ord[3];

int main() {
	cin >> A;
	cin >> B;
	cin >> C;
	
	ord[0] = A;
	ord[1] = B;
	ord[2] = C;
	
	sort(ord, ord + 3);
	
	A = ord[2];
	B = ord[1];
	C = ord[0];
	
	if (A >= B + C) {
		printf("NAO FORMA TRIANGULO\n");
	} else {
	
		if (pow(A, 2) == pow(B, 2) + pow(C, 2)) {
			printf("TRIANGULO RETANGULO\n");
		}
		
		if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
			printf("TRIANGULO OBTUSANGULO\n");
		}
		
		if (pow(A, 2) < pow(B, 2) + pow(C, 2)) {
			printf("TRIANGULO ACUTANGULO\n");
		}
		
		if (A == B && B == C) {
			printf("TRIANGULO EQUILATERO\n");
		} else if (A == B || B == C || A == C) {
			printf("TRIANGULO ISOSCELES\n");
		}
		
	}
	
    return 0;
}
