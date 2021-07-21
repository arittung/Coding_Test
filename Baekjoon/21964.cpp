#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	for (int i = str.size() - 5; i < str.size(); i++) {
		cout << str[i];
	}
	cout << endl;
	return 0;
}