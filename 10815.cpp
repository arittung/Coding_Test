#include <iostream>
#include <string>
using namespace std;

int rev(string a) {
	for (int i = 0; i < a.size() / 2; i++) {
		char tmp = a[i];
		a[i] = a[a.size() - 1 - i];
		a[a.size() - 1 - i] = tmp;
	}

	return stoi(a);
}


int main() {
	string x, y;
	cin >> x >> y;
	int x2 = rev(x);
	int y2 = rev(y);
	int result = x2+y2;
	cout << rev(to_string(result)) << endl;
	
	return 0;
}