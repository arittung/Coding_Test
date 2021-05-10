#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int x1, y1, x2, y2;
	if (n1 % 4 != 0) {
		x1 = n1 % 4 - 1;
		y1 = n1 / 4;
	}
	else {
		x1 = 3;
		y1 = n1 / 4 - 1;
	}

	if (n2 % 4 != 0) {
		x2 = n2 % 4 - 1;
		y2 = n2 / 4;
	}
	else {
		x2 = 3;
		y2 = n2 / 4 - 1;
	}
	//cout << x1 << ", " << y1 << " | " << x2 << ", " << y2 << endl;

	int sum = 0;
	if (x1 > x2) {
		sum += (x1-x2);
	}
	else { sum += (x2-x1); }
	if (y1 > y2) {
		sum += (y1-y2);
	}
	else {
		sum += (y2-y1);
	}
	cout << sum << endl;
	return 0;

}