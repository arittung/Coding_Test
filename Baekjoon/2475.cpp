#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		num = pow(num, 2);
		sum += num;
	}
	cout << sum % 10 << endl;

	return 0;

}