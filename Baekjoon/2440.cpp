#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (1) {
		if (n <= 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			cout << "*";
		}
		cout << endl;
		n--;
	}
	return 0;
}