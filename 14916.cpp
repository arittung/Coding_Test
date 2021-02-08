#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int money = n;
	int sum = 0;
	int m500 = money / 5;
	
	while (1) {
		
		money = (money - (m500 * 5));
		
		sum += (m500);
		//cout << m500 << " " << money << " " << sum << endl;
		if (m500 == 0 && money % 2 != 0) {
			sum = -1;
			break;
		}
		if (money % 2 == 0) {
			sum += (money/2);
			break;
		}
		else {
			m500--;
			money = n;
			sum = 0;
		}

	}
	cout << sum << endl;

	return 0;
}