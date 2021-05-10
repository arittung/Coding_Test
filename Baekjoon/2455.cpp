#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int max = 0;

	for (int i = 0; i < 4; i++) {
		int getin, getout;
		cin >> getout >> getin;
		sum += getin;
		sum -= getout;
		if (max < sum) {
			max = sum;
		}

		cout << sum << " " << max << endl;
	}

	cout << max << endl;
	return 0;
}