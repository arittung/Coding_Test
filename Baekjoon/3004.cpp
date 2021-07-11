#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int row, col;
	if (n == 1) {
		cout << 2 << endl;
	}
	else {
		row = n / 2;
		col = n - row;
		cout << (row + 1) * (col + 1) << endl;
	}

	return 0;
}