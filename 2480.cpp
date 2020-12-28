#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int money = 0;
	if (a == b &&  b == c) {

		money = 10000 + a * 1000;
	}
	else if (a == b) {

		money = 1000 + a * 100;
	}
	else if (b == c) {

		money = 1000 + b * 100;
	}
	else if (a == c) {

		money = 1000 + a * 100;
	}
	else {

		int max = a;
		if (max < b) {
			max = b;
			if (max < c) {
				max = c;
			}
		}
		else if (max < c) {
			max = c;
		}
		money = max * 100;
	}
	cout << money << endl;
	return 0;
}