#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '6') {
			a[i] = '5';
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == '6') {
			b[i] = '5';
		}
	}

	int num1 = stoi(a), num2 = stoi(b);
	cout << num1 + num2 << " ";

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '5') {
			a[i] = '6';
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == '5') {
			b[i] = '6';
		}
	}
	num1 = stoi(a), num2 = stoi(b);
	cout << num1 + num2 << endl;


	return 0;
}