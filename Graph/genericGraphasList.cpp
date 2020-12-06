#include<bits/stdc++.h>

using namespace std;


template <typename T>
class graph {
	map<T, list<T>>AdjList;
public:
	graph() {
	}


	void addEdge(T  u, T v, bool bidir = true) {
		AdjList[u].push_back(v);
		if (bidir == true) {
			AdjList[v].push_back(u);
		}
	}


	void printAdList(int V) {
		for ( auto i : AdjList) {
			cout << i.first << "->";
			for (auto j : i.second) {
				cout << j << ",";
			}
			cout << endl;
		}
	}
};


int main() {
	graph <string>g1;
	g1.addEdge("Modi", "Yogi", false);
	g1.addEdge("Yogi", "Modi", false);
	g1.addEdge("Trump", "Modi", false);
	g1.addEdge("Modi", "Pope", false);
	g1.addEdge("Modi", "Trump", false);
	g1.addEdge("Prabhu", "Modi", false);
	g1.addEdge("Prabhu", "Yogi", false);
	g1.addEdge("Pope", "Trump", false);

	g1.printAdList(5);
}