#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* town = new int[n];
	int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> town[i];
		if (max < town[i]) {
			max = town[i];
		}
	}
	int sum = 0;
	//cout << max << endl;
	for (int i = 0; i < n; i++) {
		sum += town[i];
	}
	cout << sum-max << endl;
	return 0;
}