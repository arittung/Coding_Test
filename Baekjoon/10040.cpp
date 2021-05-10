#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* game = new int[n];
	int* vote = new int[n];
	int expert;
	for (int i = 0; i < n; i++) {
		cin >> game[i];
		vote[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		cin >> expert;
		for (int j = 0; j < n; j++) {
			if (game[j] <= expert) {
				vote[j]++;
				break;
			}
		}
	}
	/*
	for (int i = 0; i < n; i++) {
		cout << vote[i] << " ";
	}
	cout << endl;
	*/


	int max = vote[0], maxnum = 0;
	for (int i = 1; i < n; i++) {
		if (max < vote[i]) {
			max = vote[i];
			maxnum = i;
		}
	}
	cout << maxnum + 1 << endl;
	return 0;
}