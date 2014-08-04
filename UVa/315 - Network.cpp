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

using namespace std;

// Shortcuts for "common" data types in contests
typedef long long ll;
#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL

// To simplify repetitions/loops, Note: define your loop style and stick with it!
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Rep(i, n) for (int i = 1; i <= (n); ++i)
#define clr(x, a) memset(x, (a), sizeof x)

int adjMatrix[110][110];
int n, v, a, dfsLow[110], dfsNumberCounter = 0, dfsNum[110], dfsParent[110], dfsRoot, rootChildren, articulationVertex[110];
string line;

void articulationPointAndBridge(int u) {
	dfsLow[u] = dfsNum[u] = dfsNumberCounter++;
	
	Rep(v, n) {
		if (adjMatrix[u][v] && dfsNum[v] == -1) {
			dfsParent[v] = u;

			if (u == dfsRoot)
				rootChildren++;
	
			articulationPointAndBridge(v);
			
			if (dfsLow[v] >= dfsNum[u]) {
				articulationVertex[u] = 1;
			}

			dfsLow[u] = min(dfsLow[u], dfsLow[v]);
		} else if (adjMatrix[u][v] && v != dfsParent[u]) {
			dfsLow[u] = min(dfsLow[u], dfsNum[v]);
		}
	}
}

int main() {

    while (scanf("%d", &n) && n) {

        clr(adjMatrix, 0);
        clr(dfsNum, -1);
        clr(dfsLow, 0);
		clr(articulationVertex, 0);
		clr(dfsParent, 0);
		
        while (scanf("%d", &v) && v) {

            getline(cin, line);

            istringstream iss( line );

            while ( iss >> a ) {
                adjMatrix[v][a] = 1;
                adjMatrix[a][v] = 1;
            }
        }
		
		Rep(i, n) {
			if (dfsNum[i] == -1) {
				dfsRoot = i;
				rootChildren = 0;
				articulationPointAndBridge(dfsRoot);
				articulationVertex[dfsRoot] = (rootChildren > 1);
			}
		}

		int count = 0;

		Rep(i, n) {
			count += articulationVertex[i];
		}

		cout << count << endl;
    }

}

