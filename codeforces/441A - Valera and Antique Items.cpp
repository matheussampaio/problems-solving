#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int n, v, k, sellers[50 + 10][50 + 10];
queue<int> deal;
string line;

int main() {
	
	scanf("%d %d", &n, &v);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		
		for (int j = 0; j < k; j++) {
			scanf("%d", &sellers[i][j]);
			
			if (v > sellers[i][j]) {
				deal.push(i + 1);
				getline(cin, line);
				
				break;
			}
		}
		
	}
	
	cout << deal.size();
	
	if (deal.size()) {
		cout << endl;
	}
	
	while (deal.size() > 1) {
		printf("%d ", deal.front());
		deal.pop();
	}
	
	if (deal.size()) {
		printf("%d", deal.front());
	}
	
	return 0;
}
