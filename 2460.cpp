#include <iostream>
using namespace std;

int main() {
	int total = 0;
	int max = 0;
	for (int i = 0; i < 10; i++) {
		int ride, take_off;
		cin >>  take_off>> ride;
		total -= take_off;
		total += ride;
		if (max < total) {
			max = total;
		}
	}
	cout << max << endl;
	return 0;
}