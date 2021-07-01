#include <iostream>
#define PIE 3.141592
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	double round = 0;
	round += (2 * a);
	round += (2 * PIE * b);

	cout << fixed;
	cout.precision(6);
	cout << round << endl;
	return 0;
}