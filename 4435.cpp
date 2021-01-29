#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int g[6] = { 1,2, 3, 3, 4, 10 };
		int s[7] = { 1, 2, 2, 2, 3, 5, 10 };
		int gsum = 0, ssum = 0;
		for (int j = 0; j < 6; j++) {
			int n;
			cin >>n;
			gsum += (n * g[j]);
			//cout << g[j] <<" "<<gsum << endl;
		}
		for (int j = 0; j < 7; j++) {
			int n;
			cin >> n;
			ssum += (n * s[j]);
			//cout << ssum << endl;
		}
		//cout << gsum << " " << ssum << endl;
		cout << "Battle " << i + 1 << ": ";
		if (gsum > ssum) {
			cout << "Good triumphs over Evil" << endl;
		}
		else if (gsum < ssum) {
			cout << "Evil eradicates all trace of Good" << endl;
		}
		else {
			cout << "No victor on this battle field" << endl;
		}
	}
	
	return 0;
}