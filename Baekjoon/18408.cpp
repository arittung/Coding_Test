#include <iostream>

using namespace std;

int main() {
	int one = 0, two = 0;
	for (int i = 0; i < 3; i++) {
		int t;
		cin >> t;

		if (t == 1) {
			one++;
		}
		else {
			two++;
		}
	}

	if (one > two) {
		cout << 1<< endl;
	}
	else {
		cout << 2 << endl;
	}
	return 0;

}