#include <iostream>
#include <string>
using namespace std;

int min_check(int a, int b, int c) {
	int min = a;
	if (b < a) {
		
		if (b < c) {
			min = b;
		}
		else {
			min = c;
		}
	}
	else {
		if (c < a) {
			min = c;
		}
		
	}
	return min;
}

int main() {
	
	int t, a=0, b=0, c=0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int set1, set2, set3;
		cin >> set1 >> set2>> set3;
		a += set1;
		b += set2;
		c += set3;

		if (a >= 30 && b >= 30 && c >= 30) {
			int min = min_check(a, b, c);
			cout << min << endl;
			a -= min;
			b -= min;
			c -= min;
		}
		else {
			cout << "NO" << endl;
		}
		
	}

	return 0;
}