#include <iostream>
/*

  Link: http://codeforces.com/problemset/problem/435/A
  
*/

#include <cstdio>


#include <algorithm>
#include <stack>

using namespace std;

int n, m, groups[100 + 10];

int main() {
	
	scanf("%d %d", &n, &m);
	
	for (int i=0; i < n; i++) {
		scanf("%d", &groups[i]);
	}
	
	int bus = m, index, count = 1;
	
	while (index < n) {
		
		if (bus - groups[index] >= 0) {
			bus -= groups[index];
			index++;
		} else {
			bus = m;
			count++;
		}
		
	}
	
	
	
	cout << count;
	
	return 0;
}
