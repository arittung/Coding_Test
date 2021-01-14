#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, zero = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x > 0 && y > 0) {
			q1++;
		}
		else if (x > 0 && y < 0) {
			q4++;
		}
		else if (x < 0 && y > 0) {
			q2++;
		}
		else if (x < 0 && y < 0) {
			q3++;
		}
		else {
			zero++;
		}
	}
	cout << "Q1: " << q1 << "\nQ2: " << q2 << "\nQ3: " << q3 << "\nQ4: " << q4 << "\nAXIS: " << zero << endl;
	return 0;
}