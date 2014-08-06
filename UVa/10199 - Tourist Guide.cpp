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
#define clr(x, a) memset(x, (a), sizeof x)

using namespace std;


int adjMatrix[110][110], data, cameras;
int n, v, a, k, dfsLow[110], dfsNumberCounter = 0, dfsNum[110], dfsParent[110], dfsRoot, rootChildren, articulationVertex[110];
string from, to, city;

map<string, int> citys;


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

    // freopen("input.txt", "r", stdin);

    scanf("%d", &n);

    while (n) {
        clr(adjMatrix, 0);
        clr(dfsNum, -1);
        clr(dfsLow, 0);
        clr(articulationVertex, 0);
        clr(dfsParent, 0);

        citys.clear();

        data++;

        Rep(i, n) {
            cin >> city;

            citys[city] = i;
        }

        scanf("%d", &k);

        Rep(i, k) {
            cin >> from;
            cin >> to;

            adjMatrix[citys[from]][citys[to]] = 1;
            adjMatrix[citys[to]][citys[from]] = 1;
        }

        Rep(i, n) {
            if (dfsNum[i] == -1) {
                dfsRoot = i;
                rootChildren = 0;
                articulationPointAndBridge(dfsRoot);
                articulationVertex[dfsRoot] = (rootChildren > 1);
            }
        }

        int cameras = 0;

        Rep(i, n) {
            cameras += articulationVertex[i];
        }


        printf("City map #%d: %d camera(s) found\n", data, cameras);

        for (map<string, int>::iterator iter = citys.begin(); iter != citys.end(); ++iter) {
            if (articulationVertex[iter->second]) {
                cout << iter->first << endl;
            }
        }

        scanf("%d", &n);

        if (n)
            cout << endl;

    }
    return 0;
}
