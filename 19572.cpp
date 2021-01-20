#include <iostream>
#include <string>
using namespace std;

int main() {
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;

	double a, b, c;
	a = (d1 + d2 - d3) / 2.0;
	b = d1 - a;
	c = d2 - a;
	if (a > 0 && b > 0 && c > 0) {
		cout << 1 << endl;
		cout << fixed;
		cout.precision(1);
		cout << a << " " << b << " " << c << endl;
	}
	else {
		cout << -1 << endl;
	}

	return 0;
}