#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n-1-i); j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * i +1); j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n-1; i > 0; i--) {
		for (int j = i; j <=(n-1); j++) {
			cout << " ";
		}
		for (int j = (2 * i - 1); j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}