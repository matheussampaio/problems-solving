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

int D1, D2, H1, H2, M1, M2, S1, S2, S3, S4, S5;

int main() {
	
	scanf("Dia %d\n", &D1);
	scanf("%d : %d : %d\n", &H1, &M1, &S1);
	scanf("Dia %d\n", &D2);
	scanf("%d : %d : %d\n", &H2, &M2, &S2);
	
	S3 = D1 * 86400 + H1 * 3600 + M1 * 60 + S1;
	S4 = D2 * 86400 + H2 * 3600 + M2 * 60 + S2;
	
	S5 = S4 - S3;
	
	printf("%d dia(s)\n", S5 / 86400);
	S5 %= 86400;
	printf("%d hora(s)\n", S5 / 3600);
	S5 %= 3600;
	printf("%d minuto(s)\n", S5 / 60);
	S5 %= 60;
	printf("%d segundo(s)\n", S5);
	
    return 0;
}
