#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string plates;
	cin >> plates;
	int cnt = 0;

	int before = 0;
	// 0 : ¹Ù´Ú, 1: °Å²Ù·Î
	for (int i = 0; i < plates.size(); i++) {
		
		if (i == 0) {
			cnt += 10;
			if (plates[0] == '(') {

				before = 0;
			}
			else {
				before = 1;
			}
		}
		else {
			if (plates[i] == '(') {
				if (before == 0) {
					cnt += 5;
				}
				else {
					cnt += 10;
				}
				before = 0;
			}
			else {
				if (before == 0) {
					cnt += 10;
				}
				else {
					cnt += 5;
				}
				before = 1;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}