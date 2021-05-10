#include <iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int s = 1;
	for (int i = n; i > (n - k); i--) {
		s = s * i;
	}
	int a = 1;
	for (int i = k; i >= 1; i--) {
		a = a * i;
	}
	cout << s / a << endl;
	return 0;
}