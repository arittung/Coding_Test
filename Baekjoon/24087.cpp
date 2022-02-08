#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long int a, b, s;
	cin >> s >> a >> b;
	long long int sum = 250;

	if (a >= s) {
		cout << sum << endl;
	}
	else {
		//cout << "A: " << a << endl;
		while (a < s) {
			a += b;
			sum += 100;
		}
	}
	cout << sum << endl;
	return 0;
}