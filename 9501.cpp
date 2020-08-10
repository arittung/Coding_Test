#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, d, sum = 0;
		cin >> n >> d;
		for (int j = 0; j < n; j++) {
			int v, f, c;
			cin >> v >> f >> c;
			double time = d / (double)v;
			
			
			if ((time*c) <= f) {
				sum++;
			}
		}
		cout << sum << endl;
	}
	return 0;
}