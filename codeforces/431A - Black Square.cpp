#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int c[4], calories;

string line;

int main() {
	
	scanf("%d %d %d %d\n", &c[0], &c[1], &c[2], &c[3]);
	
	getline(cin, line);
	
	for (int i=0; i < line.length(); i++) {
		
		calories += c[(line.at(i) - '0') - 1];
	}
	
	cout << calories;
	
	return 0;
}
