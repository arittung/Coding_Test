#include <iostream>
using namespace std;


int main() {
	int x, num = 0, sum = 0;
	cin >> x;
	int stick[7] = { 64, 32, 16, 8, 4, 2, 1 };
	int i = 1;
	sum += stick[0];
	while (1) {
		if (sum == x) {
			if (sum == 64) {
				num = 1;
			}
			break;
		}
		else if (sum < x) {
			sum += stick[i];
			num++;
			i++;
		}
		else {
			sum -= stick[i - 1];
			num--;
			if (num < 0) {
				num = 0;
			}
		}
	}
	cout << num << endl;
	return 0;
}