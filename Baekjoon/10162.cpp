#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int asum = 0, bsum = 0, csum = 0, check = 0;
	while (1) {
		if (t >= 300) {
			asum++;
			t -= 300;
		}
		else if (t >= 60) {
			bsum++;
			t -= 60;
		}
		else if (t >= 10) {
			csum ++;
			t -= 10;
		}

		if (t == 0) {
			break;
		}
		if (t <10 && t != 0) {
			check = 1;
			break;
		}
	}
	if (check == 1) {
		cout << -1 << endl;
	}
	else {
		cout << asum << " " << bsum << " " << csum << endl;
	}

	return 0;
}