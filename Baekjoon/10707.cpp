#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, p;
	cin >> a >> b >> c >> d >> p;
	int x, y =b;
	x = a*p;
	y = b;
	if(p>c) {
		y += ((p - c) * d);
	}
	if (x > y) {
		cout << y << endl;
	}
	else {
		cout << x << endl;
	}
	return 0;
}