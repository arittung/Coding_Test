#include <iostream>
#include <string>
using namespace std;


int main() {
	int num[4];
	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}

	if (num[0] == 8 || num[0]== 9) {
		if (num[3]== 8 || num[3] == 9) {
			if (num[1] == num[2]) {
				cout << "ignore" << endl;
			}
			else {
				cout << "answer" << endl;
			}
		}
		else {
			cout << "answer" << endl;
		}

	}
	else {
		cout << "answer" << endl;
	}

	return 0;
}