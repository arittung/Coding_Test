#include <iostream>
using namespace std;

int main() {
	int festival1[2][6] = { {1, 3, 6, 10, 15, 21}, {5000000, 3000000, 2000000, 500000, 300000, 100000} };
	int festival2[2][5] = { {1, 3, 7, 15, 31}, {5120000, 2560000, 1280000, 640000, 320000} };

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		int money = 0, j, check = 0;
		if (a != 0) {
			for (j = 0; j < 6; j++) {
				if (festival1[0][j] >= a) {
					check = 1;
					break;
				}
			}
			if (check == 1) {
				money += festival1[1][j];
				check = 0;
			}
		}
		
		
		//cout << money << endl;
		if (b != 0) {
			for (j = 0; j < 5; j++) {
				if (festival2[0][j] >= b) {
					check = 1;
					break;
				}
			}

			if (check == 1) {
				money += festival2[1][j];
			}
		}
		
		cout << money << endl;
	}
	return 0;
}