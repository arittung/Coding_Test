#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b, a2, b2;
		cin >> a >> b;
		a2 = a;
		b2 = b;
		while (b != 0) {
			int r = a % b;
			a = b;
			b = r;
		}
		cout << a2 * b2 / a << endl;
	}
	return 0;
}