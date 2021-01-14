#include <iostream>
using namespace std;

int main() {
	string score;
	cin >> score;
	double clan;
	cout << fixed;
	cout.precision(1);
	if (score == "A+") {
		clan = 4.3;
	}
	else if (score == "A0") {
		clan = 4.0;
	}
	else if (score == "A-") {
		clan = 3.7;
	}
	else if (score == "B+") {
		clan = 3.3;
	}
	else if (score == "B0") {
		clan = 3.0;
	}
	else if (score == "B-") {
		clan = 2.7;
	}
	else if (score == "C+") {
		clan = 2.3;
	}
	else if (score == "C0") {
		clan = 2.0;
	}
	else if (score == "C-") {
		clan = 1.7;
	}
	else if (score == "D+") {
		clan = 1.3;
	}
	else if (score == "D0") {
		clan = 1.0;
	}
	else if (score == "D-") {
		clan = 0.7;
	}
	else if (score == "F") {
		clan = 0.0;
	}
	cout << clan << endl;
	return 0;
}