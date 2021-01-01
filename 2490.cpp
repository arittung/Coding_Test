#include <iostream>
using namespace std;

int main() {
	
	for (int i = 0; i < 3; i++) {
		int play[4];
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> play[j];
			if (play[j] == 0) {
				sum++;
			}
		}
		switch (sum) {
		case 0:
			cout << "E" << endl;
			break;
		case 1:
			cout << "A" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		case 3:
			cout << "C" << endl;
			break;
		case 4:
			cout << "D" << endl;
			break;
		}
		
	}
	return 0;
}