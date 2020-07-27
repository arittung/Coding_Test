#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b;
	if (sum < c*2) {
		cout << sum << endl;
	}
	else {
		cout << sum - 2 * c << endl;
	}

	return 0;
}