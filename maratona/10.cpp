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

string line;


void swap(int a, int b) {
	int tmp = line[a];
	line[a] = line[b];
	line[b] = tmp;
}


int main() {

    freopen("input.txt", "r", stdin);
    
 
    int k;

    cin >> line;
    cin >> k;

    int a, b, i;
    
    while (k > 0 && i < line.length() - 1) {
    	a = line[i] - '0';
    	b = line[i+1] - '0';

    	if (a < b) {
    		swap(i, i+1);
    		i = 0;
    		k--;
    	} else {
    		i++;
    	}
    }

    cout << line << endl;

    return 0;
}
