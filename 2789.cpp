#include <iostream>
#include <vector>
using namespace std;

int main() {
	string str;
	cin >> str;
	vector<char> after;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != 'C' && str[i] != 'A' && str[i] != 'M' && str[i] != 'B' && str[i] != 'R' && str[i] != 'I' && str[i] != 'D' && str[i] != 'G' && str[i] != 'E') {
			after.push_back(str[i]);
		}
	}
	for (int i = 0; i < after.size(); i++) {
		cout << after[i] ;
	}
	cout << endl;
	return 0;
}