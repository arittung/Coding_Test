#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int result = 0;
		for (int i = 0; i < (str.size() / 2); i++) {
			if (str[i] == str[str.size() -1 - i]) {
				result = 0;
			}
			else {
				result = 1;
			}
		}
		if (result == 0) {
			cout << "Do-it" << endl;
		}
		else {
			cout << "Do-it-Not" << endl;
		}
	}
	return 0;
}