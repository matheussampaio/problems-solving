// Shortcuts for "common" data types in contests 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

// To simplify repetitions/loops, Note: define your loop style and stick with it! 

#define REP(i, a, b) \ for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local! 
#define TRvi(c, it) \ for (vi::iterator it = (c).begin(); it != (c).end(); it++) 
#define TRvii(c, it) \ for (vii::iterator it = (c).begin(); it != (c).end(); it++) 
#define TRmsi(c, it) \ for (msi::iterator it = (c).begin(); it != (c).end(); it++)


int N, dfsNumberCounter, DFS_WHITE = 0, dfs_num[110], dfs_low[110], dfsRoot, rootChildren;

void articulationPointAndBridge(int u) {
	dfs_low[u] = dfs_num[u] = dfsNumberCounter++;

	TRvii(graph[u], v) {
		
	}
}

int main() {
	
	while (scanf("%d", &n) && n) {
		
		memset(graph, 0, sizeof graph);
		
		while (scanf("%d", &v) && v) {
			
			getline(cin, line);
			
			istringstream iss( line );
		
			while( iss >> a ) {
				graph[v][a] = 1;
				graph[a][v] = 1;
			}
		}

		dfsNumberCounter = 0;
		memset(dfs_num, DFS_WHITE, sizeof dfs_num);

		for (int i=0; i <= n - 1; i++) {
			if (dfs_num[i] == DFS_WHITE) {
				dfsRoot = i; rootChildren = 0;
				articulationPointAndBridge(i);
				articulation_vertex[dfsRoot] = (rootChildren > 1);
			}
		}

		int count = 0;

		for (int i=0; i <= n - 1; i++) {
			if (articulation_vertex[i]) {
				count++;
			}
		}

		cout << count << endl;
		
	}

}	

