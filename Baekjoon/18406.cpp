#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	string n;
	cin >> n;
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n.size() / 2; i++) {
		int num = n[i] - 48;
		sum1 += num;
	}
	for (int j = n.size() / 2; j < n.size(); j++) {
		int num = n[j] - 48;
		sum2 += num;
	}
	if (sum1 == sum2) {
		cout << "LUCKY" << endl;
	}
	else {
		cout << "READY" << endl;
	}
	return 0;
}