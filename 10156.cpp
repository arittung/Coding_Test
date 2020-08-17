#include <iostream>
using namespace std;

int main() {
	int k, n, m;
	cin >> k >> n >> m;
	int total = k * n;
	int price;
	if (total - m <= 0) {
		price = 0;
	}
	else {
		price = total - m;
	}
	cout << price << endl;
	return 0;
}