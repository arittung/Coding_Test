#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num[101] = { 0,0 };
	int sum = 0;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (num[a] == 0) {
			num[a] = 1;
		}
		else {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}