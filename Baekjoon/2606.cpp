#include <iostream>
#include <vector>

using namespace std;

void dfs(int root, bool* visit, vector<vector<int>> node, vector<int>& res) {

	// root ��� �湮
	if (visit[root] == true) {
		return;		// �湮�� ���, �ٷ� ��������.
	}

	visit[root] = true;	// �湮�� ��� ǥ��
	res.push_back(root);
	//cout << root << " ";

	for (int i = 0; i < node[root].size(); i++) {	// root ���� ������ ������ ��� �湮
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
	
	int n;	// node ����
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

	// 1�� node���� dfs Ž�� ����
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