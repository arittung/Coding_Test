#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<vector<int>> point(n, vector<int>(2, 0));
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		point[i][0] = b;
		point[i][1] = a;
	}

	sort(point.begin(), point.end());

	for (int i = 0; i < n; i++) {
		cout << point[i][1] << " " << point[i][0] << endl;
	}

	return 0;
}