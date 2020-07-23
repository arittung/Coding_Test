#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double> temp;

	while (1) {
		double t;
		cin >> t;
		if (t == 999) {
			break;
		}
		temp.push_back(t);
	}
	cout<<fixed;
	cout.precision(2);
	for (int i = 1; i < temp.size(); i++) {
		cout << temp[i] - temp[i - 1] << endl;
	}
	return 0;
}