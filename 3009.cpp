#include <iostream>
using namespace std;

int main() {
	int x[3] = { 0,0 };
	int y[3] = { 0,0 };
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}
	int  x4, y4;
	if (x[0] == x[1]) {
		if (y[2] == y[0]) {
			y4 = y[1];
		}
		else {
			y4 = y[0];
		}
		x4 = x[2];
	}
	else if (x[1] == x[2]) {
		if (y[0] == y[1]) {
			y4 = y[2];
		}
		else {
			y4 = y[1];
		}
		x4 = x[0];
	}
	else if (x[0] == x[2]) {
		if (y[1] == y[0]) {
			y4 = y[2];
		}
		else {
			y4 = y[0];
		}
		x4 = x[1];
	}
	cout << x4 << " " << y4 << endl;
	return 0;
}