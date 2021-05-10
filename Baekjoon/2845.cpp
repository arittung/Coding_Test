#include <iostream>
using namespace std;

int main() {
	int l, p;
	cin >> l >> p;
	int total = l * p;
	int person[5];
	for (int i = 0; i < 5; i++) {
		cin >> person[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << person[i] - total << " ";
	}
	cout << endl;
	return 0;
}