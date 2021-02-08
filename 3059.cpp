#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int alpha[26] = { 0 };
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			alpha[s[j] - 65]++;
		}
		int sum = 0;
		for (int j = 0; j < 26; j++) {
			if (alpha[j] == 0) {
				sum += (j + 65);
			}
		}
		cout << sum << endl;
	}
	return 0;
}