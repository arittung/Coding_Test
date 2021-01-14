#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int arr[10];
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}

		for (int j = 0; j < 9; j++) {
			for (int k = j; k < 10; k++) {
				if (arr[j] < arr[k]) {
					int tmp = arr[j];
					arr[j] = arr[k];
					arr[k] = tmp;
				}
			}
		}
		cout << arr[2] << endl;
	}
	return 0;
}