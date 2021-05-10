#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int v, e;
		cin >> v >> e;

		cout << 2 + e - v << endl;
	}
	
	return 0;
}