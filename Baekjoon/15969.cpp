#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> score;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		score.push_back(num);
		
	}
	sort(score.begin(), score.end());
	cout << score.back() - score[0] << endl;
	return 0;
}