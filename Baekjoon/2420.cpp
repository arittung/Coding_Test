#include <iostream>
using namespace std;

int main() {
	long long int n, m;
	cin >> n >> m;
	long long int minus = n - m;
	if (minus < 0) {
		minus *= -1;
	}
	cout << minus << endl;
	return 0;
}