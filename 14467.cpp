#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* dir = new int[n];
	
	for (int i = 0; i < n; i++) {
		dir[i] = 2;
	}
	int cow, road, sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> cow >> road;
		if (dir[cow - 1] == 2) {
			dir[cow-1] = road;
		}
		else if (dir[cow - 1] == 1 && road == 0) {
			dir[cow - 1] = road;
			sum++;
		}
		else if (dir[cow - 1] == 0 && road == 1) {
			dir[cow - 1] = road;
			sum++;
		}
		//cout << sum << endl;
	}
	cout << sum << endl;
	return 0;

}