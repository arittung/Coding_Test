#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int s, k, h;
	cin >> s >> k >> h;
	if (s + k + h >= 100) {
		cout << "OK" << endl;
	}
	else {
		int min = s;
		if (s < k) {
			if (s < h) {
				cout << "Soongsil" << endl;
			}
			else {
				cout << "Hanyang" << endl;
			}
		}
		else {
			if (k < h) {
				cout << "Korea" << endl;
			}
			else {
				cout << "Hanyang" << endl;
			}
		}
	}
	return 0;
}