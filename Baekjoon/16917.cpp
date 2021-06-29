#include <iostream>
using namespace std;



int main() {

	int a, b, c, x, y;

	cin >> a >> b >> c >> x >> y;

	int sum = 0, min, sum2 =0;
	
	if (x > y) {
		min = y;
	}
	else {
		min = x;
	}
	//cout << min << endl;

	if (c * 2 < (a + b)) {
		int i = 0;
		while (1) {
			if (i >= min) {
				break;
			}
			sum += c * 2;
			
			
			//cout << "sum :" << sum << endl;
			i++;
		}
		sum2 = sum;
		if (min == y) {
			sum += (x - y) * a;
			sum2 += (x - y) * (c * 2);

		}
		else {
			sum += (y - x) * b;
			sum2 += (y - x) * (c * 2);
		}

	}
	else {
		sum += a * x;
		sum += b * y;
	}

	if (sum2 < sum && sum2 != 0) {
		cout << sum2 << endl;
	}
	else {
		cout << sum << endl;
	}
	//cout << sum << endl;
	return 0;

}