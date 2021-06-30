#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> alpha = { 3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1,1,1,2,2,1 };
	vector<int> score1, score2;
	int n, m;
	cin >> n >> m;
	vector<char>sum;
	char* name1 = new char[n];
	char* name2 = new char[m];
	cin >> name1 >> name2;

	int i = 0, j =0;

	//이름 더하기
	while (1) {
		if (i >= n && j >= m) {
			break;
		}
		else if (i < n && j < m) {
			sum.push_back(name1[i]);
			sum.push_back(name2[j]);
		}
		else if (i < n && j >= m) {
			sum.push_back(name1[i]);
		}
		else if(i >= n && j < m){
			sum.push_back(name2[j]);
		}
		i++;
		j++;
	}
	
	// 더해진 이름 확인
	for (int i = 0; i < sum.size(); i++) {
		//cout << sum[i];
		score1.push_back(alpha[sum[i] - 'A']);
	}
	//cout << endl;
	
	int k = 0;
	while (1) {
		if (score1.size() == 2 || score2.size() == 2) {
			break;
		}
		if (k % 2 == 0) {
			
			for (int s = 0; s < score1.size() - 1; s++) {
				score2.push_back((score1[s] + score1[s + 1]) % 10);
			}
			score1.clear();
		}
		else {
			for (int s = 0; s < score2.size() - 1; s++) {
				score1.push_back((score2[s] + score2[s + 1])%10);
			}
			score2.clear();
		}
		/*
		for (int s = 0; s < score1.size(); s++) {
			cout << score1[s] << " ";
		}
		cout << endl;
		for (int s = 0; s < score2.size(); s++) {
			cout << score2[s] << " ";
		}
		cout << endl;
		*/
		k++;

	}
	
	string res;

	if (score1.size() == 2) {
		res += (score1[0] + '0');
		res += (score1[1] + '0');
	}
	else if (score2.size() == 2) {
		res += (score2[0] + '0');
		res += (score2[1] + '0');
	}

	res += '%';
	if (res[0] == '0') {
		res.erase(0, 1);
	}
	cout << res << endl;

	return 0;
	
}