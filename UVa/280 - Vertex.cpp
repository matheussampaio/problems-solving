#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
#include <queue>

using namespace std;

/*

Link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=216

*/

int n, k, v, adj, graph[100 + 10][100 + 10], visited[100 + 10];

void DFS(int w) {

    memset(visited, 0, sizeof visited);

    stack< int > G;

    G.push(w);

    while (!G.empty()) {
        int v2 = G.top();
        G.pop();

        for (int i = 1; i <= n; i++) {
            if (graph[v2][i] == 1 && visited[i] == 0) {
                G.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {

    // freopen("input.txt", "r", stdin);

    while (scanf("%d", &n) && n) {
        memset(graph, 0, sizeof graph);

        while (scanf("%d", &v) && v) {

            while (scanf("%d", &adj) && adj) {
                graph[v][adj] = 1;
            }

        }


        scanf("%d", &k);

        for (int i = 0; i < k; i++) {
            scanf("%d", &v);

            DFS(v);

            queue< int > not_viseted;

            for (int j = 1; j <= n; j++) {
                if (visited[j] == 0) {
                    not_viseted.push(j);
                }
            }

            printf("%d", not_viseted.size());

            while (not_viseted.size()) {
                printf(" %d", not_viseted.front());
                not_viseted.pop();
            }

            printf("\n");
        }

    }


    return 0;
}
