/*
  Name: 445A - DZY Loves Chessboard
  
  Link: http://codeforces.com/problemset/problem/445/A
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;

int n, m, discovered[100 * 100 + 10], color[100 * 100 + 10], vertices[100 * 100 + 10]; //, painted[100 + 10];

void DFS() {

	stack< int > S;
	
	memset(discovered, 0, sizeof discovered);
	memset(color, 0, sizeof color);
	
	S.push(0);

	while (!S.empty()) {
		int v = S.top();
		S.pop();

		// if has top
		if (v >= m && !discovered[v - m]) {
			color[v - m] = !color[v];
			discovered[v - m] = 1;
			S.push(v - m);
		}

		// if has bottom
		if (v < (n * m) - m && !discovered[v + m]) {
			color[v + m] = !color[v];
			discovered[v + m] = 1;
			S.push(v + m);
		}

		// if has left
		if (v % m != 0 && !discovered[v - 1]) {
			color[v - 1] = !color[v];
			discovered[v - 1] = 1;
			S.push(v - 1);
		}

		// if has right
		if ((v + 1) % m != 0 && !discovered[v + 1]) {
			color[v + 1] = !color[v];
			discovered[v + 1] = 1;
			S.push(v + 1);
		}
	}
}

int main() {

	scanf("%d %d", &n, &m);
	
	memset(vertices, 1, sizeof vertices);
	
	char c;
	
	for (int i=0; i < n * m; i++) {
		cin >> c;
		
		if (c == '-') {
			vertices[i] = 0;
		} 
	}
	
	DFS();
	
	for (int i=0; i < n * m; i++) {
		if (vertices[i] == 0)
			cout << "-";
		else if (color[i] == 0)
			cout << "B";
		else if (color[i] == 1)
			cout << "W";
		
		if ((i + 1) % m == 0)
			cout << endl;
	}
	
	
	return 0;
}
