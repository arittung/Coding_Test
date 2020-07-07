#include <iostream>
using namespace std;


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m, num = 1;

		cin >> n >> m;
		int** arr = new int* [n];
		for (int j = 0; j < n; j++) {
			arr[j] = new int[m];
		}
		int check = 0;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				arr[j][k] = num;
				if (j == 11 && k == 3) {
					check = 1;
					break;
				}
				num++;
			}
			if (check == 1) {
				break;
			}
		}

		if (check == 1) {
			cout << num << endl;
		}
		else {
			cout << "-1\n";
		}
	}
	return 0;
}