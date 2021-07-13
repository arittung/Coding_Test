#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, w, h;

	cin >> n >> w >> h;
	int a = sqrt(pow(w, 2)+pow(h, 2));
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num <= w || num <= h || num <= a) {
			cout << "DA" << endl;
		}
		else {
			cout << "NE" << endl;
		}
	}
	return 0;
}