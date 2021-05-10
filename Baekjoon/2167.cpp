#include <iostream>

using namespace std;

int calc(int** arr, int a, int b, int x, int y) {
	int sum = 0;
	for (int i = a-1; i < x; i++) {
		for (int j = b-1; j < y; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}


int main() {
	int n, m;
	cin >> n >> m;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}


	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b, x, y;
		cin >> a >> b >> x >> y;
		int sum = calc(arr, a, b, x, y);
		cout << sum << endl;
	}

	return 0;
}