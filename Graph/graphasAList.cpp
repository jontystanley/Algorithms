#include <bits/stdc++.h>
using namespace std;

class graph {
	int V;
	list<int> *l;
public:
	graph(int v) {
		V = v;
		//Array of Linked Lists
		l = new list<int>[v];
	}

	void addEdge(int u, int v, bool bidir = true) {
		l[u].push_back(v);
		if (bidir) {
			l[v].push_back(u);
		}
	}
	void printAdjList() {
		for (int i = 0; i < V; i++) {
			cout << i << "->";
			for (int vertex : l[i]) {
				cout << vertex << ",";
			}
			cout << endl;
		}
	}

	void bfs(int source) {
		queue<int>q;
		map<int, bool>visited;
		q.push(source);
		visited[source] = true;

		while (!q.empty()) {
			int node = q.front();
			cout << q.front() << " ";
			q.pop();

			for (int neighbour : l[node]) {
				if (!visited[neighbour]) {
					q.push(neighbour);
					visited[neighbour] = true;
				}
			}
		}
	}
};

void SSSP(int src) {
	queue<int>q;
	map<int, int>distance;
	distance[src] = 0;
	q.push(src);
}


int main() {
	//graph has 5 vertices from 0 to 4
	graph g1 = 5;
	g1.addEdge(0, 1);
	g1.addEdge(0, 4);
	g1.addEdge(4, 3);
	g1.addEdge(1, 4);
	g1.addEdge(1, 2);
	g1.addEdge(2, 3);

	g1.bfs(0);
}