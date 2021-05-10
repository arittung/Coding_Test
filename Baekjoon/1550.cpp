#include <iostream>
using namespace std;

int main() {
	char s[6];
	cin >> s;
	int num = (int)strtol(s, NULL, 16);
	cout << num << endl;
	return 0;
}