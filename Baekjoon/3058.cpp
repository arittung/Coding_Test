#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num[7];
		int min = 100;
		int sum = 0;
		for (int j = 0; j < 7; j++) {
			cin >> num[j];
			if (num[j] % 2 == 0) {
				sum += num[j];
				if (min > num[j]) {
					min = num[j];
				}
			}
		}
		cout << sum << " " << min << endl;
	}
	return 0;
}