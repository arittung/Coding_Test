#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, c;
		cin >> n >> c;
		int res;
		if (n % c != 0) {
			res = n / c + 1;
		}
		else {
			res = n / c;
		}
		cout << res << endl;

	}
	return 0;
}