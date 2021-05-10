#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int squared = pow(n, 2);
		string nstr = to_string(n), sqstr = to_string(squared);
		int sq = sqstr.size() - nstr.size();
		//cout << sqstr.size() << " " << nstr.size() << " " << sq << endl;
		int s = 0;
		for (int j = 0; j < nstr.size(); j++) {
			//cout << nstr[j] << " " << sqstr[sq - j] << endl;
			if (nstr[j] == sqstr[sq+j]) {
				s++;
			}
			
		}
		if (s == nstr.size()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}
	return 0;
}