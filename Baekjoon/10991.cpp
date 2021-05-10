#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char arr[3];
		for (int j = 0; j < 3; j++) {
			cin >> arr[j];
		}

		cout << arr[0] + arr[2]-96 << endl;
	}
	return 0;
}