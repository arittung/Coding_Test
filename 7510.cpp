#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num[3];
		for (int j = 0; j < 3; j++) {
			cin >> num[j];
		}
		for (int j = 0; j < 2; j++) {
			for (int k = j + 1; k < 3; k++) {
				if (num[j] < num[k]) {
					int tmp = num[j];
					num[j] = num[k];
					num[k] = tmp;
				}
			}
		}
		cout << "Scenario #" << i +1<< ":\n";

		if (pow(num[1], 2) + pow(num[2], 2) == pow(num[0], 2)) {
			cout << "yes\n\n";
		}
		else {
			cout << "no\n\n";
		}
	}
	return 0;
}