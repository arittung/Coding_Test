#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int s, n, price = 0;
		cin >> s >> n;
		price += s;
		for (int j = 0; j < n; j++) {
			int q, p;
			cin >> q >> p;
			price += (q * p);
		}
		cout << price << endl;

	}
	return 0;
}