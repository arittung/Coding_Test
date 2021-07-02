#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		if (n == t) {
			sum++;
		}
	}
	cout << sum << endl;

	return 0;
}