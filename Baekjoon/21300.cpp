#include <iostream>

using namespace std;

int main() {

	int sum = 0;
	for (int i = 0; i < 6; i++) {
		int a;
		cin >> a;
		
		sum += (a * 5);
	}
	cout << sum << endl;
	return 0;
}