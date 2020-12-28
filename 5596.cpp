#include <iostream>
using namespace std;

int main() {
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 4; i++) {
		int score;
		cin >> score;
		sum1 += score;
	}
	for (int i = 0; i < 4; i++) {
		int score;
		cin >> score;
		sum2 += score;
	}

	if (sum1 > sum2) {
		cout << sum1;
	}
	else if (sum1 < sum2) {
		cout << sum2;
	}
	else {
		cout << sum1;
	}
	return 0;
}