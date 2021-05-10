#include <iostream>
#define MAX 100
using namespace std;

int main() {
	int n;
	cin >> n;
	int cpaper[MAX][MAX] = { 0,0 };

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		for (int j = x - 1; j < x + 9; j++) {
			for (int k = y - 1; k < y + 9; k++) {
				cpaper[j][k]++;
			}
		}
	}


	int sum = 0;
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (cpaper[i][j] != 0) {
				sum++;
			}
		}
	}
	cout << sum++;
	return 0;

}