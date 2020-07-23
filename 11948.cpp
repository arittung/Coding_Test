#include <iostream>
using namespace std;

int main() {
	int exam1[4] = { 0,0 };
	int exam2[2] = { 0,0 };

	for (int i = 0; i < 4; i++) {
		cin >> exam1[i];
	}
	for (int j = 0; j < 2; j++) {
		cin >> exam2[j];
	}
	if (exam2[0] < exam2[1]) {
		int tmp = exam2[0];
		exam2[0] = exam2[1];
		exam2[1] = tmp;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (exam1[i] < exam1[j]) {
				int tmp = exam1[i];
				exam1[i] = exam1[j];
				exam1[j] = tmp;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += exam1[i];
	}
	sum += exam2[0];
	cout << sum << endl;
	return 0;
}