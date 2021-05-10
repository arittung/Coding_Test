#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	string seat;
	cin >> num;
	cin >> seat;
	
	double sum = 0;
	for (int i = 0; i < num; i++) {
		if (seat[i] == 'L') {
			sum = 0;
			break;
		}
		else {
			sum++;
		}
	}
	if (sum ==0) {
		sum = 1;
		for (int i = 0; i < num; i++) {
			if (seat[i] == 'S') {
				sum++;
			}
			else if (seat[i] == 'L') {
				sum += 0.5;
			}
		}
	}
	
	
	cout << sum << endl;
	return 0;
}