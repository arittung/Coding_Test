#include <iostream>
#include <cmath>
using namespace std;

int main() {
	while (1) {
		string str;
		cin >> str;
		if (str == "#") {
			break;
		}
		int* num = new int[str.size()];
		
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '-') {
				num[i] = 0;
			}
			else if (str[i] == '\\') {
				num[i] = 1;
			}
			else if (str[i] == '(') {
				num[i] = 2;
			}
			else if (str[i] == '@') {
				num[i] = 3;
			}
			else if (str[i] == '?') {
				num[i] = 4;
			}
			else if (str[i] == '>') {
				num[i] = 5;
			}
			else if (str[i] == '&') {
				num[i] = 6;
			}
			else if (str[i] == '%') {
				num[i] = 7;
			}
			else if (str[i] == '/') {
				num[i] = -1;
			}
		}
		
		

		int j = str.size() - 1;
		int sum = 0;
		for (int i = 0; i < str.size(); i++) {
			sum += (num[i]*pow(8, j));
			j--;
		}
		cout << sum << endl;
	}
	return 0;
}