#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int max, min, n2, m2;
	n2 = n;
	m2 = m;

	while (m != 0) {
		int r = n % m;
		n = m;
		m = r;
	}
	max = n;
	min = n2 * m2 / max;
	cout << max << endl << min << endl;
	return 0;
		
}