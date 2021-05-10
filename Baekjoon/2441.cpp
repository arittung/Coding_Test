#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k = 0;
	while (n>0) {
		for (int i = 0; i < k; i++) {
			cout << " ";
		}
		for (int i = 0; i < n; i++) {
			cout << "*";
		}
		cout << endl;
		n--;
		k++;
	}
	return 0;
}