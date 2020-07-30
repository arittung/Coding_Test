#include <iostream>
using namespace std;

int main() {
	int total_score[5] = { 0,0 };
	for (int t = 0; t < 5; t++) {
		int score = 0;
		for (int i = 0; i < 4; i++) {
			int sc;
			cin >> sc;
			score += sc;

		}
		total_score[t] = score;
	}
	int total[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (total_score[i] < total_score[j]) {
				int tmp = total_score[i];
				total_score[i] = total_score[j];
				total_score[j] = tmp;
				int tmp2 = total[i];
				total[i] = total[j];
				total[j] = tmp2;
			}
		}
	}
	cout << total[0] << " " << total_score[0] << endl;
	return 0;
}