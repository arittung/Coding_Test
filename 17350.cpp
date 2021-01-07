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
		cout << "构具?" << endl;
	}
	else {
		cout << "构具;" << endl;
	}

	
	return 0;
}