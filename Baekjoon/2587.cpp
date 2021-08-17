#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> num;
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		sum += a;
		num.push_back(a);
	}
	cout << sum / 5.0 << endl;
	sort(num.begin(), num.end());
	cout << num[2] << endl;

	return 0;
}