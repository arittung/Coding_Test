#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	vector<int> num;
	while (1) {
		if (n < 2) {
			num.push_back(n);
			break;
		}
		num.push_back(n % 2);
		n /= 2;
	}
	for (int i = num.size()-1; i >= 0; i--) {
		cout << num[i];
	}
	cout << endl;
	return 0;
}