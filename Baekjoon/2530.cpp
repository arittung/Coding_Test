#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int h, m, s;
	h = d / 3600;
	m = (d - h * 3600) / 60;
	s = (d - h * 3600 - m * 60);
	
	if ((c + s) >= 60) {
		b++;
		c = (c + s) - 60;
	}
	else {
		c = c + s;
	}

	if ((b + m) >= 60) {
		a++;
		b = (b + m) - 60;
	}
	else {
		b = b + m;
	}

	if ((a+h) >= 24) {
		a = (a +h)- ((a+h)/24)*24;
	}
	else {
		a = a + h;
	}

	cout << a << " " << b << " " << c << endl;

	return 0;
}