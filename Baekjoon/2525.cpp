#include <iostream>
using namespace std;

int main() {
	int h, m, time;
	cin >> h >> m >> time;
	m += time;
	while (1) {
		if (m >= 60) {
			m -= 60;
			h++;
			if (h > 23) {
				h -= 24;
			}
		}
		else {
			break;
		}
	}
	cout << h << " " << m << endl;
	return 0;
}