#include <iostream>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int N, x, y, k, start, count;
	char c;
	cin >> N;
	vector <vector <int>> M (N, vector <int> (N,0));
	vector <vector <int>> edges (N*N+1);
	vector <bool> mark (N+1,0);
	queue <int> q;
	k=1;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cin.get(c);
			if (c=='\n') {
				j--;
			}
			else if (c=='.') {
				M[i][j]=k;
				if (M[i-1][j]!=0) {
					edges[k].push_back(M[i-1][j]);
					edges[M[i-1][j]].push_back(k);
				}
				if (M[i][j-1]!=0) {
					edges[k].push_back(M[i][j-1]);
					edges[M[i][j-1]].push_back(k);
				}
				k++;

			}
		}
	}

	cin >> x >> y;
	start=M[x-1][y-1];
	q.push(start);
	mark[start]=1;
	count=1;
	while (!q.empty()) {
		int v=q.front();
		q.pop();
		for (int i=0; i<(int)edges[v].size(); i++) {
			if (!mark[edges[v][i]]) {
				count++;
				mark[edges[v][i]]=1;
				q.push(edges[v][i]);
			}
		}
	} 

	cout << count << endl;

}
