#include <iostream>
using namespace std;

int main() {
	string n;
	cin >> n;
	int num = (n[1]-48)-(n[0]-48), a = 0;
	
	for (int i = 0; i < n.size() - 1; i++) {
		if (num != (n[i + 1] - 48) - (n[i] - 48)) {
			a = 1;
			break;
		}
	}
	if (a == 0) {
		cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" << endl;
	}
	else {
		cout << "흥칫뿡!! <(￣ ﹌ ￣)>" << endl;
	}
	return 0;
}