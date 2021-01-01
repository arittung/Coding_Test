#include <iostream>
using namespace std;

int main() {
	int n, k, l;
	cin >> n >> k >> l;
	int** team = new int* [n];
	for (int i = 0; i < n; i++) {
		team[i] = new int[3];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> team[i][j];
		}
	}

	int sum = 0, a = 0, total = 0;

	int* num = new int[n];
	for (int i = 0; i < n; i++) {
		num[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		sum = 0;
		a = 0;
		for (int j = 0; j < 3; j++) {
			if (team[i][j] < l) {
				a = 1;
				break;
			}
			sum += team[i][j];
		}
		if (a == 0 && sum >= k) {
			num[i] = 1;
			total++;
		}
	}

	cout << total << endl;
	for (int i = 0; i < n; i++) {
		if (num[i] == 1) {
			for (int j = 0; j < 3; j++) {
				cout << team[i][j] << " ";
			}
		}
	}
	cout << endl;
	return 0;

}