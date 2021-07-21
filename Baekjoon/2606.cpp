#include <iostream>
#include <vector>

using namespace std;

void dfs(int root, bool* visit, vector<vector<int>> node, vector<int>& res) {

	// root 노드 방문
	if (visit[root] == true) {
		return;		// 방문한 경우, 바로 빠져나옴.
	}

	visit[root] = true;	// 방문한 노드 표시
	res.push_back(root);
	//cout << root << " ";

	for (int i = 0; i < node[root].size(); i++) {	// root 노드와 인접한 정점을 모두 방문
		int x = node[root][i];
		dfs(x, visit, node, res);
	}
}

void print(vector<vector<int>> node) {
	for (int i = 0; i < node.size(); i++) {
		for (int j = 0; j < node[i].size(); j++) {
			cout << node[i][j] << " ";
		}
		cout << endl;
	}

}

int main() {
	
	int n;	// node 개수
	cin >> n;
	bool* visit = new bool[n+1];
	vector<vector<int>> node(n+1);
	vector<int> res;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;

		node[a].push_back(b);
		node[b].push_back(a);
	}
	

	//print(node);

	// 1번 node부터 dfs 탐색 실행
	dfs(1, visit, node, res);
	int cnt =0;
	for (int i = 0; i <= n; i++) {
		if (visit[i] == true) {
			cnt++;
		}
	}

	cout << cnt-1 << endl;
	/*
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	cout <<endl;
	*/
	return 0;

}