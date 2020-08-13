#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int sum = 1;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ',') {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}