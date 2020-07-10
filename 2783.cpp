#include <iostream>
using namespace std;

int main() {
	double x25, y25;
	cin >> x25 >> y25;
	double y = 1000 / y25;
	x25 = y * x25;
	y25 = y * y25;
	
	int n;
	cin >> n;
	double* x_price = new double[n];
	double* y_price = new double[n];
	for (int i = 0; i < n; i++) {
		cin >> x_price[i] >> y_price[i];
		double y2 = 1000 / y_price[i];
		x_price[i] = y2 * x_price[i];
		y_price[i] = y_price[i] * y2;
	}
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (x_price[i] > x_price[j]) {
				double tmp = x_price[i];
				x_price[i] = x_price[j];
				x_price[j] = tmp;
				double tmp2 = y_price[i];
				y_price[i] = y_price[j];
				y_price[j] = tmp2;
			}
		}
	}
	/*
	for (int i = 0; i < n; i++) {
		cout << x_price[i] << " " << y_price[i] << endl;
	}*/
	
	if (x_price[0] < x25) {
		cout << x_price[0] << endl;
	}
	else {
		cout << x25 << endl;
	}
	return 0;
}