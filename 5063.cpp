#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int r, e, c;
		cin >> r >> e >> c;
		int doit;
		doit = e - c;
		if (doit > r) {
			cout << "advertise" << endl;
		}
		else if(doit == r) {
			cout << "does not matter" << endl;
		}
		else {
			cout << "do not advertise" << endl;
		}
	}
	return 0;
}