#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		double price;
		cin >> price;
		price *= 0.8;
		cout<<fixed;
		cout.precision(2);
		cout <<"$"<<price << endl;
	}
	return 0;
}