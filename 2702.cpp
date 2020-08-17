#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b, max, min;
		cin >> a >> b;
		int b2 = b, a2 = a;
		while (b != 0) {
			int r = a % b;
			a = b;
			b = r;
		}
		max = a;
		min = a2 * b2 / max;
		cout << min << " " << max << endl;
	}
	return 0;
}