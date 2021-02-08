#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string magnet;
	cin >> magnet;

	int i;
	for (i = 1; i < n * 2; i++) {
		if ((magnet[i]-48) == (magnet[i-1]-48)) {
			//check = 1;
			break;
		}
	}
	if (i == (n*2)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}