#include <iostream>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	cin >> s;
	string** chat = new string*[n];
	for (int i = 0; i < n; i++) {
		chat[i] = new string[2];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> chat[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (chat[i][0] == s) {
			ans = i;
			break;
		}
	}
	int sum = 0;
	for (int i = 0; i < ans; i++) {
		if (chat[i][1] == chat[ans][1]) {
			sum++;
		}
	}
	cout << sum << endl;

	for (int i = 0; i < n; i++) {
		delete[] chat[i];
	}
	delete[] chat;
	return 0;
}