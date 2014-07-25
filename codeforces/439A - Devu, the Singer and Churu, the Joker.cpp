#include <iostream>
#include <cstdio>

using namespace std;

int n, d, song, devu;

int main() {
	
	scanf("%d %d", &n, &d);
	
	while (n--) {
		scanf("%d", &song);
		
		d -= song;
		
		if (n > 0) {
			d -= 10;
			devu += 2;
		}
	}
	
	while (d >= 5) {
		d -= 5;
		devu++;
	}
	
	if (d >= 0) {
		cout << devu;
	} else if (d + 5 == 0) {
		cout << devu - 1;
	} else {
		cout << -1;
	}
	
	return 0;
}
