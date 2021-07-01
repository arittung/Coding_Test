#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int money[4] = { 0,0 };
		int c;
		cin >> c;
		if (c / 25 > 0) {
			money[0] += c / 25;
			c -= (money[0]*25);
		}
		
		if(c/10> 0){
			money[1] += c / 10;
			c -= (money[1]*10);
		}

		if (c / 5 > 0) {
			money[2] += c / 5;
			c -= (money[2]*5);
		}

		money[3] += c;

		cout << money[0] << " " << money[1] << " " << money[2] << " " << money[3] << endl;

	}
}