#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int n, m, k, w, graph[110][110], visited[110];
queue<int> S;
stack<int> L;

void search_and_mark_leaf() {
	
	bool tem_aresta;
	
	for (int i=1; i <= n; i++) {
		tem_aresta = false;
		
		for (int j=1; j <= n; j++) {
			if (graph[i][j]) {
				tem_aresta = true;
			}
		}
		
		if (!tem_aresta && visited[i] == 0) {
			S.push(i);
			visited[i] = 1;
		}
	}
}

void remove_arestas(int vertice) {
	for (int i=1; i <= n; i++) {
		graph[i][vertice] = 0;
	}
}

void topologia() {
	search_and_mark_leaf();

 	while (!S.empty()) {
		int n = S.front();
		S.pop();
		L.push(n);
		
		remove_arestas(n);
		search_and_mark_leaf();
	}
    
}
	

int main() {
	
	scanf("%d %d", &n, &m);
	
	while (n + m != 0) {
		memset(graph, 0, sizeof graph);
		memset(visited, 0, sizeof visited);
		while(!S.empty()) S.pop();
		while(!L.empty()) L.pop();
		
		for (int i=0; i < m; i++) {
			scanf("%d %d", &k, &w);
			
			graph[k][w] = 1;
		}
		
		topologia();
		
		cout << L.top();
		L.pop();
		
		while (!L.empty()) {
			printf(" %d", L.top());
			L.pop();
		}
		
		cout << endl;
		
		scanf("%d %d", &n, &m);
	}
    return 0;
}
