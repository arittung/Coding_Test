#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* num = new int[n];
	int* sort = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		sort[i] = num[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if (sort[i] > sort[j]) {
				int tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (num[i] != sort[i]) {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}