#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int score[5] = { 0,0 };
		for (int j = 0; j < 5; j++) {
			cin >> score[j];
		}
		
		for (int j = 0; j < 4; j++) {
			for (int k = j + 1; k < 5; k++) {
				if (score[j] < score[k]) {
					int tmp = score[j];
					score[j] = score[k];
					score[k] = tmp;
				}
			}
		}

		if ((score[1] - score[3]) >= 4) {
			cout << "KIN" << endl;
		}
		else {
			int total = 0;
			for (int j = 1; j < 4; j++) {
				total += score[j];
			}
			cout << total << endl;
		}
	}

	return 0;
}