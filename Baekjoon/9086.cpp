#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str.size() == 1) {
			cout << str[0] << str[0] << endl;
		}
		else {
			cout << str[0] << str[str.length() - 1] << endl;
		}
	}
	return 0;

}