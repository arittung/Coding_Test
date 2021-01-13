#include <iostream>
using namespace std;

int main() {
	int day;
	cin >> day;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int car;
		cin >> car;
		if (car == day) {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}