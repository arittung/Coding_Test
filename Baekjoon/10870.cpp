#include <iostream>
using namespace std;

int fibonacci(int n) {
	if (n == 1 || n == 2 ) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
	else {
		//cout << n - 1 << " " << n - 2 << endl;
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;
	cin >> n;
	
	cout << fibonacci(n) << endl;

	return 0;
}