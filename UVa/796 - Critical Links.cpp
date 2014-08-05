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

using namespace std;

int adjMatrix[1100][1100], bridgeMatrix[1100][1100];
int n, v, a, k, dfsLow[1100], dfsNumberCounter = 0, dfsNum[1100], dfsParent[1100], dfsRoot, rootChildren, articulationVertex[110], bridgeCount;
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

            if (dfsLow[v] > dfsNum[u]) { // for bridge
                // printf(" Edge (%d, %d) is a bridge\n", u, v);
                bridgeMatrix[u][v] = 1;
                bridgeCount++;
            }

            dfsLow[u] = min(dfsLow[u], dfsLow[v]);
        } else if (adjMatrix[u][v] && v != dfsParent[u]) {
            dfsLow[u] = min(dfsLow[u], dfsNum[v]);
        }
    }
}


int main() {

    freopen("input.txt", "r", stdin);

    while (scanf("%d", &n) != EOF) {

        clr(adjMatrix, 0);
        clr(bridgeMatrix, 0);
        clr(dfsNum, -1);
        clr(dfsLow, 0);
        clr(articulationVertex, 0);
        clr(dfsParent, 0);
        bridgeCount = 0;

        Rep(i, n) {
            scanf("%d (%d)", &v, &k);

            Rep(j, k) {
                scanf("%d", &a);

                adjMatrix[v][a] = 1;
                adjMatrix[a][v] = 1;
            }
        }

        rep(i, n) {
            if (dfsNum[i] == -1) {
                dfsRoot = i;
                rootChildren = 0;
                articulationPointAndBridge(dfsRoot);
                articulationVertex[dfsRoot] = (rootChildren > 1);
            }
        }

        printf("%d critical links\n", bridgeCount);

        rep(i, n) {
            rep(j, n) {
                if (bridgeMatrix[i][j]) {
                    printf("%d - %d\n", i, j);
                }
            }
        }

        printf("\n");

    }

    return 0;
}
