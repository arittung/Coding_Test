#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int turn = 0;
	while (1) {
		if (n <= 0) {
			turn--;
			break;
		}

		if (n >= 3) {
			n -= 3;
		}
		else {
			n--;
		}
		turn++;
	}

	if (turn % 2 == 0) {
		cout << "SK" << endl;
	}
	else {
		cout << "CY" << endl;
	}
	return 0;
}