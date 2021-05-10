#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	char a[80] = { 0,0 };
	for (int i = 0; i < t; i++) {
		int sum = 0;
		int n = 0;

		cin >> a;
		for (int j = 0; j < 80; j++) {
			if (a[j] == 'O') {
				n++;
			}
			else if (a[j] == 'X') {
				n = 0;
			}
			else if (a[j] == 0) {
				break;
			}
			sum += n;

		}
		cout << sum << endl;
	}

	return 0;

}