#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* length = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> length[i];
	}
	int max = length[n - 1];
	int sum = 1;
	for (int i = n - 2; i >= 0; i--) {
		if (length[i] > max) {
			max = length[i];
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}