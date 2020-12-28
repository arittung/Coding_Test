#include <iostream>
using namespace std;

int calc(string n) {
	int sum = 0;
	for (int i = 0; i < n.size(); i++) {
		int num = n[i] - 48;
		switch (num) {
		case 1:
			sum += 2;
			break;
		case 0 :
			sum += 4;
			break;
		default:
			sum += 3;
			break;
		}
		
	}
	sum += (n.size() + 1);
	return sum;
}


int main() {

	while (1) {
		string n;
		cin >> n;
		if (n == "0") {
			break;
		}
		cout << calc(n) << endl;
	}
	
	return 0;
}