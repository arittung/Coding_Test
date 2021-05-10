#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		double num;
		cin >> num;

		while (1) {
			char ch;
			cin.get(ch);

			if (ch == '\n') {
				break;
			}
			if (ch == '@') {
				num *= 3.0;
			}
			else if (ch == '%') {
				num += 5.0;
			}
			else if (ch == '#') {
				num -= 7.0;
			}
			else {
				num;
			}
		}
		cout << fixed;
		cout.precision(2);
		cout << num << endl;
		
	}

	return 0;
}