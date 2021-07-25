#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	vector<int> score;
	for (int i = 0; i < 4; i++) {
		int a;
		cin >> a;
		score.push_back(a);
	}
	sort(score.begin(), score.end());

	int res = (score[0] + score[3]) - (score[1] + score[2]);
	if (res >= 0) {
		cout << res << endl;
	}
	else {
		cout << res * (-1) << endl;
	}
	//cout << (score[0] + score[3]) - (score[1] + score[2]) << endl;
	return 0;
}