#include <iostream>
using namespace std;

int main() {
	int n, num;
	cin >> n;
	int ticket[1000000] = { 0,0 };
	for (int i = 0; i < n; i++) {
		cin >> num;
		ticket[num] = 1;
	}
	int i;
	for (i = 1; i < 1000000; i++) {
		if (ticket[i] == 0) {
			break;
		}
	}
	cout << i << endl;
	return 0;
}