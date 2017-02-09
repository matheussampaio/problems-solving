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

int X, Y, G = 0, I = 0, E = 0, K, T;

int main() {

	while (true) {
		T++;
		cin >> X;
		cin >> Y;

		if (X > Y) {
			I++;
		} else if (X < Y) {
			G++;
		} else {
			E++;
		}

		while (true) {
			printf("Novo grenal (1-sim 2-nao)\n");

			cin >> K;

			if (K == 1) {
				break;
			} else if (K == 2) {
				printf("%d grenais\n", T);
				printf("Inter:%d\n", I);
				printf("Gremio:%d\n", G);
				printf("Empates:%d\n", E);

				if (I > G) {
					printf("Inter venceu mais\n");
				} else if (I < G) {
					printf("Gremio venceu mais\n");
				} else {
					printf("Nao houve vencedor\n");
				}

				return 0;
			}
		}
	}

	return 0;
}
