#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> str;
	str.push_back(s);

	int size = s.size();

	for (int i = 0; i < size-1; i++) {
		s= s.erase(0, 1);

		str.push_back(s);
		//cout << str.size() <<": " << s << endl;
	}
	

	sort(str.begin(), str.end());

	for (int i = 0; i < size; i++) {
		cout <<str[i] << endl;
	}
	return 0;

}