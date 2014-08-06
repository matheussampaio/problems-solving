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

int lettersCount, adjMatrix[30][30], dfs_num[30 * 30], DFS_WHITE = -1, V, DFS_BLACK = -2;
char lettersChar[30 * 30];
string newline, oldline;
map<char, int> letters;
vector<int> topologicalSort;

void registerLetters(string s) {
    rep(i, s.size()) {

        if (!letters[s.at(i)]) {
            letters[s.at(i)] = ++lettersCount;
            lettersChar[lettersCount] = s.at(i);
        }

    }
}

void topoVisit(int u) {
    dfs_num[u] = DFS_BLACK;

    Rep(v, lettersCount) {
        if (adjMatrix[u][v] && dfs_num[v] == DFS_WHITE) {
            topoVisit(v);
        }
    }

    topologicalSort.push_back(u); // this is the only change
}

int main() {

    // freopen("input.txt", "r", stdin);

    getline(cin, oldline);

    registerLetters(oldline);

    while (getline(cin, newline) && newline != "#") {
        registerLetters(newline);

        rep(i, min(oldline.size(), newline.size())) {
            if (oldline.at(i) != newline.at(i)) {
                int x = letters[oldline.at(i)];
                int y = letters[newline.at(i)];

                adjMatrix[x][y] = 1;

                break;
            }
        }

        oldline = newline;
    }

    topologicalSort.clear(); // this global vector stores topological sort in reverse order

    memset(dfs_num, DFS_WHITE, sizeof dfs_num);

    Rep(i, lettersCount) {
        if (dfs_num[i] == DFS_WHITE) {
            topoVisit(i);
        }
    }

    reverse(topologicalSort.begin(), topologicalSort.end());

    REP (i, 0, topologicalSort.size() - 1) {
        printf("%c", lettersChar[topologicalSort[i]]);
    }

    printf("\n");


    return 0;
}
