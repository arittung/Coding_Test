#include <iostream>
using namespace std;

int main() {
	int l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;
	double korean = (double)a / c;
	double math = (double)b / d;
	int day;
	if (korean > math) {
		
		if (korean - (korean /1) == 0) {
			day = l - korean;
		}
		else {
			day  = l - korean - 1;
		}
	}
	else {
		if (math - (math / 1) == 0) {
			day = l - math;
		}
		else {
			day = l - math - 1;
		}
	}
	cout << day << endl;
	return 0;
}