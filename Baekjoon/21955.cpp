#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	string a, b;
	a = str.substr(0, str.size()/2);
	b = str.substr(str.size() / 2);
	cout << a << " " << b << endl;

	return 0;
}