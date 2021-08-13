#include <iostream>
using namespace std;

int main() {
	int angle[3];

	int total = 0;
	for (int i = 0; i < 3; i++) {
		cin >> angle[i];
		total += angle[i];
	}

	if (total != 180) {
		cout << "Error" << endl;
	}
	else {
		if (angle[0] == angle[1] && angle[1] == angle[2]) {
			cout << "Equilateral" << endl;
		}
		else if (angle[0] != angle[1] && angle[1] != angle[2] && angle[0] != angle[2]) {
			cout << "Scalene" << endl;
		}
		else {
			cout << "Isosceles" << endl;
		}
	}
	return 0;
}