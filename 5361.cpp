#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	double p = 350.34, r = 230.90, i = 190.55, c = 125.30, e = 180.90;
	cout << fixed;
	cout.precision(2);
	for (int j = 0; j < t; j++) {
		double a, b, g, d, f;
		cin >> a >> b >> g >> d >> f;
		
 		double price = a * p + b * r + g * i + d * c + f * e;
		cout << "$" << price << endl;
	}
	return 0;
}