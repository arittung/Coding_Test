#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string* name = new string[n];
	int a = 0;
	for (int i = 0; i < n; i++) {
		cin >> name[i];
		if (name[i] == "anj") {
			a = 1;
		}
	}
	if (a == 0) {
		cout << "����?" << endl;
	}
	else {
		cout << "����;" << endl;
	}

	
	return 0;
}