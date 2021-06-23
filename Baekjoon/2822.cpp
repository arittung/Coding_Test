#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> score, res;
	for (int i = 0; i < 8; i++) {
		int n;
		cin >> n;

		score.push_back(n);
	}

	vector<int> sort_score(score);
	
	sort(sort_score.rbegin(), sort_score.rend());

	int total = 0;
	for (int i = 0; i < 5; i++) {
		total += sort_score[i];
		auto it = find(score.begin(), score.end(), sort_score[i]);
		res.push_back(it - score.begin()+1);
	}

	cout << total<<endl;

	sort(res.begin(), res.end());

	for (int i = 0; i < 5; i++) {
		
		cout << res[i] << " ";
	}
	cout << endl;
	return 0;
}