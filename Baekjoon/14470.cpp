#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int time = 0;
	
	if (a < 0) {
		time += ((a * -1)*c);
		time += d;
		time += b * e;
	}
	else if (a == 0) {
		time += d;
		time += b * e;
	}
	else {
		time += (b-a) * e;
	}
	cout << time << endl;
	return 0;

}