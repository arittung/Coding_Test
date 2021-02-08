#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string str1, str2, str;
	str1 = to_string(a);
	str = to_string(b);
	str1 += str;

	str2 = to_string(c);
	str = to_string(d);
	str2 += str;
	//cout << str1 << " " << str2 << endl;

	long long int num1 = 0, num2 = 0;
	for (int i = 0; i < str1.size(); i++) {
		num1 += ((str1[i] - 48) * pow(10, str1.size() - i - 1));
		//cout << num1 << " "<<str1[i] << "*"<< pow(10, str1.size() - i - 1) << endl;
	}
	for (int i = 0; i < str2.size(); i++) {
		num2 += ((str2[i] - 48) * pow(10, str2.size() - i - 1));
	}
	//cout << num1 << " " << num2 << endl;
	cout << num1 + num2 << endl;
	return 0;
}