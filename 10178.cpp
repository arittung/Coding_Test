#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int c, v;
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) ans your dad gets " << c % v << " piece(s)." << endl;
	}
	return 0;
}