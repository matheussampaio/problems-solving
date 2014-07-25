/*

  Name: 448A - Rewards
  
  Link: http://codeforces.com/problemset/problem/448/A
  
*/

#include <iostream>
#include <cstdio>

using namespace std;

int a1, a2, a3, b1, b2, b3, n;

bool bizon() {
	int T = a1 + a2 + a3;
	int M = b1 + b2 + b3;
	
	while (n-- && (T > 0 || M > 0)) {
		if (T > 0) {
			T -= 5;
		} else if (M > 0) {
			M -= 10;
		}
	}
	
	return (T <= 0 && M <= 0);
}

int main() {

	scanf("%d %d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3, &n);

	if (bizon()) {
		printf("YES");
	} else {
		printf("NO");
	}

	return 0;
}
