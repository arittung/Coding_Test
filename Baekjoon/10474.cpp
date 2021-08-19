#include <iostream>

using namespace std;

int main() {
	while (1) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}

		int c = a / b;
		cout << c << " " << a - c * b << " / " << b << endl;
	}
	return 0;
}