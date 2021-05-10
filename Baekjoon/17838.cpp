#include <iostream>
#include <string>
using namespace std;

void print(int* num) {
	for (int i = 0; i < 7; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}

int check(string c) {
	int num[7] = { c[0] - 65, c[0] - 65, c[2] - 65, c[2] - 65,
		c[0] - 65, c[2] - 65, c[2] - 65 };
	//print(num);
	int num2[7];
	int checknum = 0;
	for (int i = 0; i < c.size(); i++) {
		num2[i] = c[i] - 65;
		if (num[i] != num2[i]) {
			checknum++;
			break;
		}
	}
	//print(num2);
	return checknum;
}

int main() {
	int t, checknum;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		checknum = 0;
		string command;
		cin >> command;

		if (command.size() == 7) {
			checknum = check(command);
			if (checknum == 0 && command[0] != command[2]) {
				checknum = 1;
			}
			else {
				checknum = 0;
			}
		}
		cout << checknum << endl;
	}
	return 0;
}