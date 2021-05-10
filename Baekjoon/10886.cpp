#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int one = 0, zero = 0;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			zero++;
		}
		else {
			one++;
		}
	}
	if (one > zero) {
		cout << "Junhee is cute!" << endl;
	}
	else {
		cout << "Junhee is not cute!" << endl;
	}
	return 0;
}