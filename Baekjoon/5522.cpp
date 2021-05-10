#include <iostream>
using namespace std;

int main() {
	int score[5];
	int total_score = 0;
	for (int i = 0; i < 5; i++) {
		cin >> score[i];
		total_score += score[i];
	}
	cout << total_score << endl;
	return 0;
}