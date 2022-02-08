#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long int n;
	cin >> n;
	double res = sqrt(n) * 4;

	cout << fixed;
	cout.precision(8);

	cout << res << endl;
	
	
	return 0;
}