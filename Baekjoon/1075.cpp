#include <iostream>
using namespace std;

int main() {
	int n, f;
	cin >> n >> f;

	int tmp = (n / 100)*100;
	while (1) {
		if (tmp % f == 0) {
			break;
		}
		tmp++;
	}
	cout.width(2);
	cout.fill('0');
	cout << tmp % 100 << endl;
	return 0;
	
}