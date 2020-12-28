#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++) {
		if ((str[i] >= 'A' && str[i] <= 'Z')) {
			if (i == 0 || str[i - 1] == '-') {
				cout << str[i];
			}
		}
	}
	return 0;
}