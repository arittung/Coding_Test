#include <iostream>

using namespace std;

int main() {
	int c, k, p;
	cin >> c >> k >> p;


	int res = 0;
	for (int i = 1; i <= c; i++) {
		res += k * i + p * i * i;
	}
	cout << res << endl;

	return 0;
}